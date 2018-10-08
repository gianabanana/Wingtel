<?php
	session_start();

	require 'config.php';

	if(!isset($_SESSION['username']) || empty($_SESSION['username'])){
	  header("location: login.php");
	  exit;
	}



	$message = '';
	$_SESSION['booking_checkin_date'] = ''; //global
	$_SESSION['booking_checkout_date'] = ''; //global

	if(isset($_POST['submit'])) {
		$startdate = $_POST['startDate'];
		$returndate = $_POST['returnDate'];
		if(empty($_POST['startDate']) || empty($_POST['returnDate']))
			$message = "No date selected!";
		else {
			if($_POST['returnDate'] > $_POST['startDate'] && $_POST['startDate'] >= date("Y-m-d")) {
				$_SESSION['booking_checkin_date'] = $_POST['startDate'];
				$_SESSION['booking_checkout_date'] = $_POST['returnDate'];
			$diff = abs(strtotime($returndate) - strtotime($startdate));
			$datediff = floor($diff/ (60*60*24));
			$_SESSION['datediff'] = $datediff;

				header("Location: bookingselectroom.php");
			} else {
				$message = 'Invalid date inputs!';
			}
		}
	}
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Select Date</title>
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


	<form action="" method="POST" id="carForm">
		Start Date: <input type="date" name="startDate"> &nbsp
		Return Date: <input type="date" name="returnDate"> &nbsp
		<br>
		<br>
		<input type="submit" name="submit" value="Select Date">
		<input type="reset" name="clear" value="Clear">
	</form>

	<br>

	<?php if(!empty($message)): ?>
		<p><?= $message ?></p>
	<?php endif; ?>

	<footer>
		<ul class="socialMedia">
			<li><a href="https://www.facebook.com" target = "_blank"><i class = "fa fa-facebook"></i></a></li>
        	<li><a href="https://www.twitter.com" target = "_blank"><i class = "fa fa-twitter"></i></a></li>
        	<li><a href="https://www.youtube.com" target = "_blank"><i class = "fa fa-youtube"></i></a></li>
        	<li><a href="https://www.instragam.com" target = "_blank"><i class = "fa fa-instagram"></i></a></li>
        	<li><a href="https://www.snapchat.com" target = "_blank"><i class = "fa fa-snapchat"></i></a></li>
		</ul>
	</footer>
	<footer class="copyright">
		<p>&copy; Go HOtels 2017
	</footer>
</body>
</html>
