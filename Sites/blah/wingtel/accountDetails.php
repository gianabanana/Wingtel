<?php
include('session.php');

$connection = mysql_connect("localhost", "root", "root");
$db = mysql_select_db("wingtel", $connection);

$bookingNumber = $_SESSION['bookingNumber'];
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
  <meta name="description" content="">
  <meta name="author" content="">

  <title>Wingtel</title>

  <!-- Bootstrap core CSS -->
  <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <link href="vendor/icofont/icofont.min.css" rel="stylesheet" >

  <!-- Custom fonts for this template -->
  <link href="vendor/fontawesome-free/css/all.min.css" rel="stylesheet" type="text/css">
  <link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet" type="text/css">
  <link href='https://fonts.googleapis.com/css?family=Kaushan+Script' rel='stylesheet' type='text/css'>
  <link href='https://fonts.googleapis.com/css?family=Droid+Serif:400,700,400italic,700italic' rel='stylesheet' type='text/css'>
  <link href='https://fonts.googleapis.com/css?family=Roboto+Slab:400,100,300,700' rel='stylesheet' type='text/css'>

  <!-- Custom styles for this template -->
  <link href="css/accountDetails.css" rel="stylesheet">

  <link rel="stylesheet" href="//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
  <link rel="stylesheet" href="/resources/demos/style.css">
  <script src="https://code.jquery.com/jquery-1.12.4.js"></script>
  <script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
</head>

<body id="page-top">
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark fixed-top" id="mainNav">
    <div class="container">
      <!-- <a class="navbar-brand js-scroll-trigger" href="index.html">Wingtel</a> -->
      <button class="navbar-toggler navbar-toggler-right" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
        Menu
        <i class="fas fa-bars"></i>
      </button>
      <div class="collapse navbar-collapse" id="navbarResponsive">
        <ul class="navbar-nav text-uppercase ml-auto">
          <!-- <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="#promos">PROMOS</a>
          </li> -->
          <!-- <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="flight.php">FLIGHTS</a>
          </li>
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="hotel.php">HOTELS</a>
          </li> -->
          <!-- <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="account.php">BOOKINGS</a>
          </li> -->
          <li class="nav-item">
            <p class="nav-link js-scroll-trigger">WELCOME <?php echo $login_session; ?></p>
          </li>
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="index.html">LOG OUT</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <!-- Header -->
  <header class="masthead">
    <div class="container">
      <div class="intro-text">
      </div>
      <div id="eTicket">
        <h2>e-Ticket</h2>
        <div class="row text-center">
          <div class="flightNumber">
            <?php
            $sql = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
            $result = mysql_query($sql, $connection);
            while($row=mysql_fetch_array($result)){
              $idPassenger = $row['idPassenger'];
            }

            $sql2 = "SELECT Flight_idFlight FROM Booking WHERE Passenger_idPassenger = '$idPassenger' AND idBooking = '$bookingNumber'";
            $result2 = mysql_query($sql2, $connection);
            while($row2=mysql_fetch_array($result2)){
              $idFlight = $row2['Flight_idFlight'];
              ?>Flight #: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$idFlight.'><br/>';
            }
            ?>
          </div>
          <div class="bookingNumber">
            <?php
            $sql4 = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
            $result4 = mysql_query($sql4, $connection);
            while($row4=mysql_fetch_array($result4)){
              $idPassenger = $row4['idPassenger'];
            }

            $sql3 = "SELECT idBooking FROM Booking WHERE Passenger_idPassenger = '$idPassenger' AND Flight_idFlight = '$idFlight'";
            $result3 = mysql_query($sql3, $connection);
            while($row3=mysql_fetch_array($result3)){
              $idBooking = $row3['idBooking'];
              ?>Booking #: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$idBooking.'><br/>';
              // echo "<input type="text" value=".$row2['idFlight'].">";
            }
            ?>
          </div>
        </div>
        <div class="row text-center">
          <div class="where">
            <?php
            $sql11 = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
            $result11 = mysql_query($sql11, $connection);
            while($row11=mysql_fetch_array($result11)){
              $idPassenger = $row6['idPassenger'];
            }

            $sql12 = "SELECT Flight_idFlight FROM Booking WHERE Passenger_idPassenger = '$idPassenger' AND idBooking = '$bookingNumber'";
            $result12 = mysql_query($sql12, $connection);
            while($row12=mysql_fetch_array($result12)){
              $idFlight = $row12['Flight_idFlight'];
            }

            $sql14 = "SELECT Schedule_idSchedule FROM Flight WHERE idFlight = '$idFlight'";
            $result14 = mysql_query($sql14, $connection);
            while($row14=mysql_fetch_array($result14)){
              $idSchedule = $row14['Schedule_idSchedule'];
            }

            $sql15 = "SELECT Direction_idDirection FROM Schedule WHERE idSchedule = '$idSchedule'";
            $result15 = mysql_query($sql15, $connection);
            while($row15=mysql_fetch_array($result15)){
              $idDirection = $row15['Direction_idDirection'];
            }

            $sql16 = "SELECT origin, destination FROM Direction WHERE idDirection = '$idDirection'";
            $result16 = mysql_query($sql16, $connection);
            while($row16=mysql_fetch_array($result16)){
              $origin = $row16['origin'];
              $destination = $row16['destination'];
              ?><div class="origin">Origin: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$origin.'><br/>';
              ?></div><div class="destination">Destination: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$destination.'><br/>';
              ?></div><?php
            }

            $sql13 = "SELECT departureDate, arrivalDate, departureTime, arrivalTime FROM Schedule
            WHERE idSchedule = '$idSchedule'";
            $result13 = mysql_query($sql13, $connection);
            while($row13=mysql_fetch_array($result13)){
              $departureDate = $row13['departureDate'];
              $arrivalDate = $row13['arrivalDate'];
              $departureTime = $row13['departureTime'];
              $arrivalTime = $row13['arrivalTime'];
              ?><div class="departureDate">Departure Date: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$departureDate.'><br/>';
              ?></div><div class="arrivalDate">Arrival Date: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$arrivalDate.'><br/>';
              ?></div><div class="departureTime">Departure Time: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$departureTime.'><br/>';
              ?></div><div class="arrivalTime">Arrival Time: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$arrivalTime.'><br/>';
              ?></div><?php
            }
            ?>
          </div>
        </div>
        <div class="row text-center">
          <div class="name">
            <?php
            $sql6 = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
            $result6 = mysql_query($sql6, $connection);
            while($row6=mysql_fetch_array($result6)){
              $idPassenger = $row6['idPassenger'];
            }

            $sql5 = "SELECT idBooking FROM Booking WHERE Passenger_idPassenger = '$idPassenger' AND Flight_idFlight = '$idFlight'";
            $result5 = mysql_query($sql5, $connection);
            while($row5=mysql_fetch_array($result5)){
              $idBooking = $row5['idBooking'];
            }

            $sql7 = "SELECT title, firstName, middleName, lastName FROM BookingDetails
            WHERE Booking_idBooking = '$idBooking'";
            $result7 = mysql_query($sql7, $connection);
            while($row7=mysql_fetch_array($result7)){
              $title = $row7['title'];
              $firstName = $row7['firstName'];
              $middleName = $row7['middleName'];
              $lastName = $row7['lastName'];
              // $fullName = $firstName." ".$middleName." ".$lastName;
              ?><div class="title">Title: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$title.'><br/>';
              ?></div><div class="firstName">First Name: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$firstName.'><br/>';
              ?></div><div class="middleName">Middle Name: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$middleName.'><br/>';
              ?></div><div class="lastName">Last Name: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$lastName.'><br/>';
              ?></div><?php
            }
            ?>
          </div>
        </div>
        <div class="row text-center">
          <div class="passportNumber">
            <?php
            $sql8 = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
            $result8 = mysql_query($sql8, $connection);
            while($row8=mysql_fetch_array($result8)){
              $idPassenger = $row8['idPassenger'];
            }

            $sql9 = "SELECT idBooking FROM Booking WHERE Passenger_idPassenger = '$idPassenger' AND Flight_idFlight = '$idFlight'";
            $result9 = mysql_query($sql9, $connection);
            while($row9=mysql_fetch_array($result9)){
              $idBooking = $row9['idBooking'];
            }

            $sql10 = "SELECT passport FROM BookingDetails WHERE Booking_idBooking = '$idBooking'";
            $result10 = mysql_query($sql10, $connection);
            while($row10=mysql_fetch_array($result10)){
              $passport = $row10['passport'];
              ?><div class="passport">Passport #: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$passport.'><br/>';
              ?></div><?php
            }

            $sql17 = "SELECT Flight_idFlight FROM Booking WHERE idBooking = $idBooking";
            $result17 = mysql_query($sql17, $connection);
            while($row17=mysql_fetch_array($result17)){
              $idFlight = $row17['Flight_idFlight'];
            }

            $sql18 = "SELECT Price FROM Flight WHERE idFlight = '$idFlight'";
            $result18 = mysql_query($sql18, $connection);
            while($row18=mysql_fetch_array($result18)){
              $price = $row18['Price'];
              ?><div class="price">Price: <?php
              echo '<input readonly=readonly style=cursor:default;border:none type="text" value='.$price.'><br/>';
              ?></div><?php
            }
            ?>
          </div>
        </div>
      </div>
    </div>
  </header>
  </div>
</body>
