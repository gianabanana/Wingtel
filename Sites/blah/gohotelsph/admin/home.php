<?php
require 'db.php';

$message = "";

if(isset($_POST['confirm'])){
  if(empty(trim($_POST["booknum"]))){
      $message = "Textbox is empty";
  } else{

      // Prepare a select statement

      $sql = "UPDATE booking SET status = 'Confirmed' WHERE bookingNum = ? ";
      if($stmt = mysqli_prepare($link, $sql)){
          // Bind variables to the prepared statement as parameters
          mysqli_stmt_bind_param($stmt, "s",$param_booknum);

          // Set parameters ($param_num is the room number from the database)
          //comparing room number between the database and the selected
          $param_booknum = trim($_POST["booknum"]);

          if(mysqli_stmt_execute($stmt)){
            $message = "booking confirmed";
          }else{
            $message  = "something went wrong";
          }

          }
mysqli_stmt_close($stmt);
          }
        }
      elseif(isset($_POST['cancel'])){
          if(empty(trim($_POST["booknum"]))){
              $message = "Textbox is empty";
          } else{

              // Prepare a select statement

              $sql = "DELETE FROM booking WHERE bookingNum = ? ";
              if($stmt = mysqli_prepare($link, $sql)){
                  // Bind variables to the prepared statement as parameters
                  mysqli_stmt_bind_param($stmt, "s",$param_booknum);

                  // Set parameters ($param_num is the room number from the database)
                  //comparing room number between the database and the selected
                  $param_booknum = trim($_POST["booknum"]);

                  if(mysqli_stmt_execute($stmt)){
                    $message = "booking canceled";
                  }else{
                    $message  = "something went wrong";
                  }

                  }
        mysqli_stmt_close($stmt);
                  }
                }

?>
<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "../iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Select Room</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
    <link rel="stylesheet" href="../style.css" />
		<style>
			table {
    	font-family: arial, sans-serif;
    	border-collapse: collapse;
    	width: 100%;
			}

			td, th {
    	border: 1px solid #dddddd;
	    text-align: left;
    	padding: 8px;
			}

			tr:nth-child(even) {
    	background-color: #dddddd;
			}

			tr:hover
			{
			background-color: green;
			color: white;
			cursor: pointer;
			}
		</style>

		<script src="jquery-3.2.1.min.js"></script>

</head>


<body>

	<banner>
		<div id="banner">
		<div id="logo">
			<img src="../iconpic/go.png">
		</div>

			<div class="contactnum">
				<p> Call to book at +639368445144/+639152190503 </p>
			</div>

			<div id="inside">
				<ul>
					<li><a href="logout.php">LOGOUT</a></li>
					<!-- <li><a href="#">ABOUT</a></li>
					<li><a href="#">SERVICES</a></li>
          <li><a href="#">CLIENTS</a></li>
					<li><span style="font-size:20px;cursor:pointer" onclick="openNav()">&#9776;
							Menu</span></li> -->
				</ul>
	</div>
</div>
</banner>
<br><br><br><br><br><br><br><br><br><br><br>

<form action="" method ="POST" id="roomForm">
Booking Number	: <input type="text" name="booknum" id="booknum" readonly> &nbsp
		<input type="submit" name="confirm" value = "Confirm">
    <input type="submit" name="cancel" value = "Cancel">
		<input type="reset" name="clear" value="Clear">
		<br>
    <?php echo $message; ?>
	</form>



<table id='tbl1';>
  <tr>
		<th>Room Number</th>
    <th>First Name</th>
    <th>Middle Name</th>
    <th>Last Name</th>
    <th>Booking Number</th>
    <th>Check-in Date</th>
    <th>Check-out Date</th>
    <th>No of Nights</th>
      <th>Status</th>
  </tr>


<?php
$sql = "SELECT booking.idRoom, booking.bookingNum, booking.checkin_date, booking.checkout_date, booking.no_of_nights, booking.status, customer.firstName as fname, customer.middleName as mname, customer.lastName as lname, room.roomNo as roomno
 FROM booking LEFT JOIN customer ON booking.idCustomer  = customer.idCustomer
 LEFT JOIN room ON room.idRoom = booking.idRoom";
if($result = mysqli_query($link, $sql)){
    if(mysqli_num_rows($result) > 0){
        while($row = mysqli_fetch_array($result)){
            echo "<br>";
            echo "<tr id='rowid'>";
              echo "<td>" . $row['roomno'] . "</td>";
            echo "<td>" . $row['fname'] . "</td>";
            echo "<td>" . $row['mname'] . "</td>";
            echo "<td>" . $row['lname'] . "</td>";
						echo "<td>" . $row['bookingNum'] . "</td>";
            echo "<td>" . $row['checkin_date'] . "</td>";
            echo "<td>" . $row['checkout_date'] . "</td>";
            echo "<td>" . $row['no_of_nights'] . "</td>";
            echo "<td>" . $row['status'] . "</td>";

            echo "</tr>";
        }
        // Free result set
        mysqli_free_result($result);
    } else{
        echo "No records matching your query were found.";
    }
} else{
    echo "ERROR: Could not able to execute $sql. " . mysqli_error($link);
}

// Close connection
mysqli_close($link);

  ?>

</table>

<script>

	var table = document.getElementById('tbl1');
	 // while(table.rows[i] != undefined){
		for(var i = 0; i < table.rows.length; i++) {
			table.rows[i].onclick = function() {
				rIndex = this.rowIndex;
				document.getElementById("booknum").value = this.cells[4].innerHTML;
			};
		}

	</script>


</body>
</html>
