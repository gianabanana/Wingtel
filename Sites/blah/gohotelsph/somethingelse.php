<?php
session_start();
require_once 'config.php';
$sql = "SELECT room.roomType,room.roomNo, room.price,room.details,booking.bookingNum AS bnum FROM room LEFT JOIN booking ON booking.idRoom = room.idRoom WHERE room.roomNo = ?";
if($stmt = mysqli_prepare($link, $sql)){
    // Bind variables to the prepared statement as parameters
    mysqli_stmt_bind_param($stmt, "s",$param_roomno);

    // Set parameters ($param_num is the room number from the database)
    //comparing room number between the database and the selected
    $param_roomno =  $_SESSION["roomno"];

    if(mysqli_stmt_execute($stmt)){
      $result2 = mysqli_stmt_get_result($stmt);

      if(mysqli_num_rows($result2) == 1){

          $row = mysqli_fetch_array($result2, MYSQLI_BOTH);
          $_SESSION['rnum'] = $row['roomNo'];
          $_SESSION['rtype'] = $row["roomType"];
          $_SESSION['rprice'] = $row["price"];
          $_SESSION['rdetails'] = $row["details"];
          $_SESSION['bnum'] = $row["bnum"];
        }
        mysqli_stmt_close($stmt);
      }
    }
    ?>

<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Welcome</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
    <link rel="stylesheet" href="style.css" />
</head>


<body>
	<banner>
		<div id="banner">
		<div id="logo">
			<img src="iconpic/go.png">
		</div>

			<div class="contactnum">
				<p> Call to book at +639368445144/+639152190503 </p>
			</div>

			<div id="inside">
				<ul>
					<li><a href="showbranch.php">BRANCHES</a></li>
					<li><a href="#">ABOUT</a></li>
					<li><a href="#">SERVICES</a></li>
          <li><a href="#">CLIENTS</a></li>
					<li><span style="font-size:20px;cursor:pointer" onclick="openNav()">&#9776;
							Menu</span></li>
				</ul>
	</div>
</div>
</banner>
<br><br><br><br><br><br><br><br><br><br><br>
<h1><?php echo "succesfully booked room" ?></h1>

<h>Customer Details</h>
<br>

<?php
  echo "Name: ";
	print_r($_SESSION['fname']);
  echo " ";
  print_r($_SESSION['mname']);
  echo " ";
  print_r($_SESSION['lastname']);
 ?>

 <br>

 <?php
   echo "Country: ";
   print_r($_SESSION['country']);
 ?>
 <br>
 <?php
   echo "Address: ";
   print_r($_SESSION ['address']);
 ?>
 <br>
 <?php
   echo "Birthdate: ";
   print_r($_SESSION ['bday']);
 ?>
 <br>
 <?php
   echo "Citizenship: ";
   print_r($_SESSION ['citizenship']);
?>


<br><br><br>
<h>Booking Details</h>
<br>
<p>Room Number: <?php print_r($_SESSION ['rnum']);?> </p>
<p>Room Type: <?php print_r($_SESSION ['rtype']);?> </p>
<p>Details: <?php print_r($_SESSION ['rdetails']);?> </p>
<P>Refernence No: <?php print_r($_SESSION ['bnum']);?></p>
<br><br>
  <a href = "bookingselectdate.php" class = "button">BOOK ANOTHER ROOM?</button>
  &nbsp;
    <a href = "read.php" class = "button">VIEW BOOKING</button>

</body>
</html>
