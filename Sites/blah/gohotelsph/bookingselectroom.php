<?php
	session_start();

	require 'config.php';

	if(!isset($_SESSION['username']) || empty($_SESSION['username'])){
	  header("location: login.php");
	  exit;
	}


$vacancy_err = "";


if($_SERVER["REQUEST_METHOD"] == "POST"){
			$random = mt_rand(1000,9999);
			// $vacancy_err = "";
    // Validate
    if(empty(trim($_POST["rnum"]))){
        $message = "Please select a room";
    } else{

        // Prepare a select statement
				 $_SESSION["roomno"] = trim($_POST["rnum"]);
        $sql = "SELECT idRoom, availability,price FROM room where roomNo = ?";
        if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "s",$param_rnum);

            // Set parameters ($param_num is the room number from the database)
						//comparing room number between the database and the selected
            $param_rnum = trim($_POST["rnum"]);

						if(mysqli_stmt_execute($stmt)){
	            $result = mysqli_stmt_get_result($stmt);

	            if(mysqli_num_rows($result) == 1){

	                $row = mysqli_fetch_array($result, MYSQLI_BOTH);
							$_SESSION['rid'] = $row["idRoom"];
							$_SESSION['avail'] = $row['availability'];
							$_SESSION['price'] = $row['price'];
						}

						}
 mysqli_stmt_close($stmt);
            }
						if($_SESSION['avail'] != 'vacant'){

																			$vacancy_err = "room already reserved";

																	}
																	else{

																		$sql = "INSERT INTO booking (bookingNum, checkin_date, checkout_date,bookingPrice, no_of_nights, status, idCustomer, idRoom) VALUES ( ?, ?, ?, ?, ?, ?, ?, ?)";
																		if($stmt = mysqli_prepare($link, $sql)){
																			mysqli_stmt_bind_param($stmt, "ssssssss", $parambookno, $paramcheckin, $paramcheckout,$parambookprice,$paramnonights, $paramstatus, $paramidcustomer, $paramroomid);
																			$parambookno = $random;
																			$paramcheckin = $_SESSION['booking_checkin_date'];
																			$paramcheckout = 	$_SESSION['booking_checkout_date'];
																			$paramidcustomer =   $_SESSION['id'];
																			$paramroomid = $_SESSION['rid'];
																			$paramnonights = $_SESSION['datediff'];
																			$paramstatus = "Not confirmed";
																			$parambookprice = 	$_SESSION['price'] * $_SESSION['datediff'];
																			if(mysqli_stmt_execute($stmt)){
																						echo "yessssss";
																					// header("location: payment.php");
																			}
																				mysqli_stmt_close($stmt);
																			}
																			else{
																					echo "something went wrong";
																						}


																								$sql = "UPDATE room SET availability = 'reserved' WHERE roomNo = ?";
																								if($stmt = mysqli_prepare($link, $sql)){
																										// Bind variables to the prepared statement as parameters
																										mysqli_stmt_bind_param($stmt, "s",$param_bookno);

																										// Set parameters ($param_num is the room number from the database)
																										//comparing room number between the database and the selected
																										$param_bookno = trim($_POST['rnum']);

																										if(mysqli_stmt_execute($stmt)){
																												echo "woooh";

																										}
																									}
																											header("location: somethingelse.php");

																	}

					}
											 //
												// 			$sql = "SELECT idRoom  FROM booking where idCustomer = ?";
												// 			if($stmt = mysqli_prepare($link, $sql)){
												// 					// Bind variables to the prepared statement as parameters
												// 					mysqli_stmt_bind_param($stmt, "s",$param_idcustomer);
											 //
												// 					// Set parameters ($param_num is the room number from the database)
												// 					//comparing room number between the database and the selected
												// 					$param_idcustomer = $_SESSION['id'];
											 //
												// 					if(mysqli_stmt_execute($stmt)){
												// 					  mysqli_stmt_store_result($stmt);
											 //
												// 						if(mysqli_stmt_num_rows($stmt) == 1){
											 //
												// 								$vacancy_err = "Room is already reserved";
												// 					}else{
												// 				echo "okay naaaa";
												// 					}
											 //
												// 					}
											 // mysqli_stmt_close($stmt);
												// 					}





    }
?>


<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Select Room</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
    <link rel="stylesheet" href="style.css" />
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

	<!-- <banner>
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
</banner> -->
<br><br><br><br><br><br><br><br><br><br><br>
<h1><?php print_r($vacancy_err); ?></h1>
<form action="" method ="POST" id="roomForm">
	Room Number: <input type="text" name="rnum" id="rnum" readonly> &nbsp
		<input type="submit" name="submit" value = "Book">
		<input type="reset" name="clear" value="Clear">
		<br>
	</form>



<table id='tbl1';>
  <tr>
		<th>Room Number</th>
    <th>Room Type</th>
    <th>Number of Pax</th>
    <th>Price</th>
    <th>Details</th>
    <th>Availability</th>
  </tr>


<?php
$sql = "SELECT * FROM room";
if($result = mysqli_query($link, $sql)){
    if(mysqli_num_rows($result) > 0){
        while($row = mysqli_fetch_array($result)){
            echo "<br>";
            echo "<tr id='rowid'>";
						echo "<td>" . $row['roomNo'] . "</td>";
            echo "<td>" . $row['roomType'] . "</td>";
            echo "<td>" . $row['no_of_pax'] . "</td>";
            echo "<td>" . $row['price'] . "</td>";
            echo "<td>" . $row['details'] . "</td>";
            echo "<td>" . $row['availability'] . "</td>";
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
				document.getElementById("rnum").value = this.cells[0].innerHTML;
			};
		}

	</script>


</body>
</html>
