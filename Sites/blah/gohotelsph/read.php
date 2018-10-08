<?php
session_start();
require_once 'config.php';

$i = -1;
$sql = "SELECT booking.bookingNum, booking.no_of_nights, booking.bookingPrice, booking.status, room.roomNo as roomnum FROM booking LEFT JOIN room ON booking.idRoom = room.idRoom WHERE idCustomer = ?";

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

<?php
if($stmt = mysqli_prepare($link, $sql)){
    // Bind variables to the prepared statement as parameters
    mysqli_stmt_bind_param($stmt, "s",$idcust);

    $idcust = $_SESSION['id'];

    if(mysqli_stmt_execute($stmt)){
      $result = mysqli_stmt_get_result($stmt);

      while($row = mysqli_fetch_array($result)){
        $i++;
        $data[$i]['bookNum'] = $row['bookingNum'];
        $data[$i]['room'] = $row['roomnum'];
        $data[$i]['nights'] = $row['no_of_nights'];
        $data[$i]['price'] = $row['bookingPrice'];
        $data[$i]['status'] = $row['status'];
        echo"Reference Number: " .$row['bookingNum']; //print reference number
        echo"<br>";
        echo"Room Number: " .$row['roomnum']; //print room number
        echo"<br>";
        echo"Number of nights: " .$row['no_of_nights']; // print number of nights
        echo"<br>";
        echo"Price: " .$row['bookingPrice']; // print price
        echo"<br>";
        echo"Status: " .$row['status']; // print status
        echo"<br>";
        echo"<br>";
        echo"<br>";
        echo"Total Booking Purchase : ";
        $array[] = $data[$i]['price'];
        echo array_sum($array);


      }
    }
  }

 ?>

</body>
</html>
