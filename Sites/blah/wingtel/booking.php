<?php
session_start();

include('session.php');

$connection = mysql_connect("localhost", "root", "root");
$db = mysql_select_db("wingtel", $connection);

$origin = $_GET['origin'];
$destination = $_GET['destination'];
$departureDate = $_GET['departureDate'];
// $travelClass = $_GET['travelClass'];

if(!isset($_POST['submit'])){
  $sql = "SELECT idDirection FROM Direction WHERE origin = '$origin' AND destination = '$destination'";
  $result = mysql_query($sql, $connection);
  while($row=mysql_fetch_array($result)){
    $idDirection = $row['idDirection'];
  }

  $sql2 = "SELECT idSchedule FROM Schedule WHERE departureDate = '$departureDate'";
  $result2 = mysql_query($sql2, $connection);
  while($row2=mysql_fetch_array($result2)){
    $idSchedule = $row2['idSchedule'];
  }

  $sql3 = "SELECT idFlight FROM Flight WHERE Schedule_idSchedule = '$idSchedule'";
  $result3 = mysql_query($sql3, $connection);
  while($row3=mysql_fetch_array($result3)){
    $idFlight = $row3['idFlight'];
  }

  $sql4 = "SELECT idFlight, departureDate, arrivalDate, origin, destination, departureTime, arrivalTime, Price
  FROM Flight
  INNER JOIN Schedule ON Schedule_idSchedule = idSchedule
  INNER JOIN Direction ON Direction_idDirection = idDirection
  WHERE origin = '$origin' AND destination = '$destination' AND departureDate = '$departureDate'";
  $result4 = mysql_query($sql4, $connection);
  ?>

  <table id="flightList" border="1" style="margin-left: 205px; margin-top: 150px;">
    <tr>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Flight #</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Origin</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Destination</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Departure Date</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Arrival Date</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Departure Time</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Arrival Time</th>
      <th style="font-size: 14px; text-align: center; background-color: grey; color: white">Price</th>
    </tr>
  <tbody>

    <?php
    while($row4=mysql_fetch_array($result4)){
      ?>

      <tr>
        <td name="idFlight" style="width: 70px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['idFlight'] ?></td>
        <td name="origin" style="width: 180px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['origin'] ?></td>
        <td name="destination" style="width: 180px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['destination'] ?></td>
        <td name="departureDate" style="width: 120px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['departureDate'] ?></td>
        <td name="arrivalDate" style="width: 120px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['arrivalDate'] ?></td>
        <td name="departureTime" style="width: 125px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['departureTime'] ?></td>
        <td name="arrivalTime" style="width: 125px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['arrivalTime'] ?></td>
        <td name="price" style="width: 70px; text-align: center; font-size: 12px; cursor: pointer"><?php echo $row4['Price'] ?></td>
      </tr>

      <?php
    }
    ?>

  </tbody>
  </table>

  <?php
}
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
  <link href="css/booking.css" rel="stylesheet">

  <link rel="stylesheet" href="//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
  <link rel="stylesheet" href="/resources/demos/style.css">
  <script src="https://code.jquery.com/jquery-1.12.4.js"></script>
  <script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

  <script>
  	var table = document.getElementById('flightList');
  	 // while(table.rows[i] != undefined){
  		for(var i = 0; i < table.rows.length; i++) {
  			table.rows[i].onclick = function() {
  				rIndex = this.rowIndex;
  				document.getElementById("flightNumber").value = this.cells[0].innerHTML;
  			};
  		}
  	</script>

</head>

<body id="page-top">
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark fixed-top" id="mainNav">
    <div class="container">
      <a class="navbar-brand js-scroll-trigger" href="index.html">Wingtel</a>
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
          </li>
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="account.php">BOOKINGS</a>
          </li> -->
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="index.html">LOG OUT</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <header class="masthead">
    <div class="container">
      <div class="intro-text">
      </div>
      <div id="booking">
        <form action="bookingDetails.php" method="get">
          <!-- <div class="passenger">
            <i class="fas fa-user-friends"></i>
              <input type="text" name="adult" id="search" placeholder="Adult" />
              <input type="text" name="child" id="search" placeholder="Child" />
              <input type="text" name="infant" id="search" placeholder="Infant" />
          </div> -->

          <input type="text" name="flightNumber" id="flightNumber" style="display: none">
          <div class="row text-center">
            <div class="aaa" style="margin-left: 525px;">
              <input type="submit" name="submit" value="BOOK FLIGHT" class="btn-book">
              <a type="submit" name="cancel" value="CANCEL" class="btn-cancel" href="flight.php">CANCEL</a>
            </div>
          </div>
        </form>
      </div>
    </div>
  </header>

  <!-- Bootstrap core JavaScript -->
  <script src="vendor/jquery/jquery.min.js"></script>
  <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
  <script src="vendor/jquery/bootstrap-datepicker.js"></script>

  <!-- Plugin JavaScript -->
  <script src="vendor/jquery-easing/jquery.easing.min.js"></script>

  <!-- Contact form JavaScript -->
  <script src="js/jqBootstrapValidation.js"></script>
  <script src="js/contact_me.js"></script>

  <!-- Custom scripts for this template -->
  <script src="js/agency.min.js"></script>
</body>
</html>
