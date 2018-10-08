<?php
// Initialize the session
require "config.php";
session_start();

// If session variable is not set it will redirect to login page
if(!isset($_SESSION['username']) || empty($_SESSION['username'])){
  header("location: login.php");
  exit;
}


//selecting check in and checkout date:
	// $message = '';
	// $_SESSION['booking_checkin_date'] = ''; //global
	// $_SESSION['booking_checkout_date'] = ''; //global
  //
	// if(isset($_POST['submit'])) {
	// 	if(empty($_POST['startDate']) || empty($_POST['returnDate']))
	// 		$message = "No date selected!";
	// 	else {
	// 		if($_POST['returnDate'] > $_POST['startDate'] && $_POST['startDate'] >= date("Y-m-d")) {
	// 			$_SESSION['booking_checkin_date'] = $_POST['startDate'];
	// 			$_SESSION['booking_checkout_date'] = $_POST['returnDate'];
  //
	// 			header("Location: welcome.php");
	// 		} else {
	// 			$message = 'Invalid date inputs!';
	// 		}
	// 	}
	// }

  //selecting gohotels branch/location:
// $_SESSION['branch'] = ''; //global
// $_SESSION['idBranch'] = ''; //global

//set parameter:
// $_SESSION['branch'] = $_POST['branch'];
// $_SESSION['idBranch'] = $_POST['idBranch'];

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

<div class="welcomemsg">
        <h1>Hi, <b><?php echo htmlspecialchars($_SESSION['username']); ?></b>. Welcome to GOHOTELS PH.</h1>
</div>

<p><a href="log-out.php" class="btn btn-danger">Sign Out of Your Account</a></p>

<div class="topnav">
		<!-- <div class="options1">
			<div class="dropdown">
        <div id="location" class = "location">
            <select class ="loc" name = "branch">
                <option value = "" selected>Location</option>
                <option value = "Bacolod">Bacolod</option>
                <option value="Cubao-Quezon City">Cubao-Quezon</option>
                <option value="Dumaguete">Dumaguete</option>
                <option value="Ermita-Manila">Ermita-Manila</option>
                <option value="Iloilo">Iloilo</option>
                <option value="Lanang-Davao">Lanang-Davao</option>
                <option value="Mandaluyong">Mandaluyong</option>
                <option value="Manila Airport Road">Manila Airport Road</option>
                <option value="North Edsa-Quezon City">North Edsa-Quezon City</option>
                <option value="Ortigas Center">Ortigas Center</option>
                <option value="Otis-Manila">Otis-Manila</option>
                <option value="Puerto Prinsesa">Puerto Prinsesa</option>
                <option value="Tacloban">Tacloban</option>
                <option value="Timog-Quezon City">Timog-Quezon City</option>
             </select>

           </div>

      Checkin Date: <input type="date" name="startDate"> &nbsp
		  Checkout Date: <input type="date" name="returnDate"> &nbsp

      <div class="nights" >
            <select class = "num" name = "nights">
             <option value = ""selected>No. of Nights</option>
            <option value = "1">1</option>
            <option value = "2">2</option>
            <option value="3">3</option>
            <option value="4">4</option>
            <option value="5">5</option>
            <option value = "6">6</option>
            <option value = "7">7</option>
            <option value="8">8</option>
            <option value="9">9</option>
            <option value="10">10</option>
         </select>
       </div>

       <div class="rooms" >
             <select class = "num" name = "rooms">
              <option value = ""selected>No. of Rooms</option>
             <option value = "1">1</option>
             <option value = "2">2</option>
             <option value="3">3</option>
             <option value="4">4</option>
             <option value="5">5</option>
          </select>
        </div> -->

			<a href="bookingselectdate.php" class="button">BOOK NOW</button>

        <a href = "read.php" class = "button">VIEW BOOKING</button>
			</div>
	</div>


	<div class="slideshow">

		<div class="mySlides-fade">
			<img src="img/3.png" style="position: relative; top: 5px; padding-left:8px">
		</div>

		<div class="mySlides-fade">
			<img src="img/4.png" style="position: relative; top: 5px; padding-left:8px">
		</div>

		<div class="mySlides-fade">
			<img src="img/5.png" style="position: relative; top: 5px; padding-left:8px">
		</div>

</div>
</body>
</html>

<script>
  var slideIndex = 0;
  showSlides();

  function showSlides() {
    var i;
    var slides = document.getElementsByClassName("mySlides-fade");
    for (i = 0; i < slides.length; i++) {
      slides[i].style.display = "none";
    }
    slideIndex++;
    if (slideIndex > slides.length) {
      slideIndex = 1
    }
    slides[slideIndex - 1].style.display = "block";
    setTimeout(showSlides, 5000); // Change image every 2 seconds
  }
</script>
