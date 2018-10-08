<?php
include('src/session.php');

$connection = mysql_connect("localhost", "root", "root");
$db = mysql_select_db("wingtel", $connection);

$sql2 = "SELECT idPassenger FROM Passenger WHERE email = '$login_session'";
$result2 = mysql_query($sql2, $connection);
while($row2=mysql_fetch_array($result2)){
  $idPassenger = $row2['idPassenger'];
}

$sql = "SELECT idBooking FROM Booking WHERE Passenger_idPassenger = '$idPassenger'";
$result = mysql_query($sql, $connection);
$total = mysql_num_rows($result);
while($row=mysql_fetch_array($result)){
  $bookingNumber = $row['idBooking'];
  $_SESSION['bookingNumber'] = $bookingNumber;
}
// if($total>1){
//   echo "dapat muadd siya ug another link";
//   // $_SESSION['bookingNumber'] = $bookingNumber;
//   // echo $bookingNumber;
//   // echo $_SESSION['bookingNumber'];
//   // echo '<script type="text/javascript">' addElement(link); '</script>';
// }

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
  <link href="css/account.css" rel="stylesheet">

  <link rel="stylesheet" href="//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
  <link rel="stylesheet" href="/resources/demos/style.css">
  <script src="https://code.jquery.com/jquery-1.12.4.js"></script>
  <script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

  <script>
  js_variable_name = <?php echo $total; ?>;
  if(js_variable_name>1){
    function addElement(link) {
    var newLi = document.createElement("li");
    var newA = document.createElement("a");
    newA.setAttribute("href", "src/accountDetails.php");
    newLi.appendChild(newA);
    newA.innerHTML = "Booking #: <?php echo $bookingNumber ?>";
    document.getElementById("link").appendChild(newLi);
  }
}
</script>
</head>
<body onload="addElement(link)">
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
            <a class="nav-link js-scroll-trigger" href="src/index.html">LOG OUT</a>
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
      <ul id="link">
        <li><a href="src/accountDetails.php">Booking #: <?php echo $bookingNumber ?></a></li>
      </ul>
    </div>
  </header>

</body>
</html>
