<?php
$connection = mysql_connect("localhost", "root", "root");
$db = mysql_select_db("wingtel", $connection);

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
  <link href="css/flight.css" rel="stylesheet">

  <link rel="stylesheet" href="//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
  <link rel="stylesheet" href="/resources/demos/style.css">
  <script src="https://code.jquery.com/jquery-1.12.4.js"></script>
  <script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

  <script>
  $(document).ready(function(){
    $("#myCheck").click(function(){
      $("#iconTrial").toggle();
      $("#trial").toggle();
    });
  });
  </script>

  <script>
  $('table#flightList').on('click', 'tr', function(event){
    // console.log(this);
    // this.forEach( cell => { console.log(cell)})
    console.log($(this).find('input').val());
    // document.write($(this).find('input').val());
  });
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
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="flight.php">FLIGHTS</a>
          </li>
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="hotel.php">HOTELS</a>
          </li>
          <li class="nav-item">
            <a class="nav-link js-scroll-trigger" href="account.php">BOOKINGS</a>
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
      <div id="flight">
        <h2>Flights</h2>
        <form action="booking.php" method="get">
          <div class="row text-center">
            <div class="from">From:</div>
            <div class="to">To:</div>
            <!-- <div class="noOfPassengers">No. of Passengers:</div> -->
          </div>
          <div class="row text-center">
            <div class="origin">
              <i class="fas fa-plane-departure"></i>
              <select name="origin">
                <?php
                $sql = "SELECT * FROM Country order by countryName asc";
                $query = mysql_query($sql, $connection);
                while($row=mysql_fetch_array($query)){
                ?>
                <option>
                  <?php echo $row["countryName"]; ?>
                </option>
                <?php
              }
                ?>
              </select>
            </div>
            <div class="destination">
              <i class="fas fa-plane-arrival"></i>
              <select name="destination">
                <?php
                $sql = "SELECT * FROM Country order by countryName asc";
                $query = mysql_query($sql, $connection);
                while($row=mysql_fetch_array($query)){
                ?>
                <option>
                  <?php echo $row["countryName"]; ?>
                </option>
                <?php
              }
                ?>
              </select>
            </div>
            <!-- <div class="passenger">
              <i class="fas fa-user-friends"></i>
              <form action="bookingDetails.php" method="get">
                <input type="text" name="adult" id="search" placeholder="Adult" list="passengerList" />
                <datalist id="passengerList">
                  <option value="1"></option>
                  <option value="2"></option>
                  <option value="3"></option>
                  <option value="4"></option>
                  <option value="5"></option>
                  <option value="6"></option>
                  <option value="7"></option>
                  <option value="8"></option>
                  <option value="9"></option>
                </datalist>
                <input type="text" name="chik" id="search" placeholder="Child" list="passengerList" />
                <datalist id="passengerList">
                  <option value="1"></option>
                  <option value="2"></option>
                  <option value="3"></option>
                  <option value="4"></option>
                  <option value="5"></option>
                  <option value="6"></option>
                  <option value="7"></option>
                  <option value="8"></option>
                  <option value="9"></option>
                </datalist>
                <input type="text" name="search" id="search" placeholder="Infant" list="passengerList" />
                <datalist id="passengerList">
                  <option value="1"></option>
                  <option value="2"></option>
                  <option value="3"></option>
                  <option value="4"></option>
                  <option value="5"></option>
                  <option value="6"></option>
                  <option value="7"></option>
                  <option value="8"></option>
                  <option value="9"></option>
                </datalist>
              </form>
            </div> -->
          </div>
          <div class="row text-center">
            <div class="departure">Departure:</div>
            <div class="return"><input type="checkbox" id="myCheck"> Return:</div>
            <!-- <div class="seatClass">Seat Class:</div> -->
          </div>
          <div class="row text-center">
            <div class="departureDate"><i class="fas fa-calendar-alt" style="width: 20px;"></i><input type="date" name="departureDate"></div>
            <div class="returnDate"><i class="fas fa-calendar-alt" style="display: none; width: 20px;" id="iconTrial"></i><input id="trial" type="date" style="display: none"></div>
            <!-- <div class="seatClass2">
              <i class="icofont-chair"></i>
              <select name="travelClass">
                <?php
                $sql = "SELECT * FROM TravelClass order by idTravelClass asc";
                $query = mysql_query($sql, $connection);
                while($row=mysql_fetch_array($query)){
                ?>
                <option>
                  <?php echo $row["travelClassName"]; ?>
                </option>
                <?php
              }
                ?>
              </select>
            </div> -->
          </div>
      <!-- <div class="row text-center">
        <button type="submit" name="submit" class="btn-search">
          <i class="fa fa-search"></i> Search Flights
        </button>
      </div> -->
      <input type="submit" name="search" value="Search Flights" class="btn-search" id="button">
    </form>
  </div>

    <!--  Airline Partners  -->
    <div id="partners">
      <div class="rowHead">
        Airline Partners
      </div>
      <div class="rowBody">
        We are partnering with various airlines across the Philippines to get you to wherever you need to be.
      </div>
    </div>
    <section class="py-5">
      <div class="container">
        <div class="row">
          <div class="col-md-3 col-sm-6">
            <a href="#">
              <img class="img-fluid d-block mx-auto" src="img/logos/philippineAirlines.png" alt="">
            </a>
          </div>
          <div class="col-md-3 col-sm-6">
            <a href="#">
              <img class="img-fluid d-block mx-auto" src="img/logos/cebuPacific.jpeg" alt="">
            </a>
          </div>
          <div class="col-md-3 col-sm-6">
            <a href="#">
              <img class="img-fluid d-block mx-auto" src="img/logos/airAsia.png" alt="">
            </a>
          </div>
          <div class="col-md-3 col-sm-6">
            <a href="#">
              <img class="img-fluid d-block mx-auto" src="img/logos/skyjet.png" alt="">
            </a>
          </div>
        </div>
      </div>
    </section>
  </div>
</header>

<!--  Payment Partners  -->
<div id="partners">
  <div class="rowHead text-center">
    Payment Partners
  </div>
  <div class="rowBody text-center">
    We are partnering with the most reliable payment service providers to make sure every transaction is smooth and worry-free.
  </div>
</div>
<div class="container">
  <div class="row" style="margin-left: 202px; margin-bottom: 20px;">
      <a href="#">
        <img src="img/logos/paymentPartners.png" alt="">
      </a>
  </div>
</div>

<!-- Footer -->
<footer>
  <div class="container">
    <div class="row">
      <div class="col-md-4">
        <span class="copyright">Copyright &copy; 2018 Wingtel</span>
      </div>
      <div class="col-md-4">
        <ul class="list-inline social-buttons">
          <li class="list-inline-item">
            <a href="#">
              <i class="fab fa-twitter"></i>
            </a>
          </li>
          <li class="list-inline-item">
            <a href="#">
              <i class="fab fa-facebook-f"></i>
            </a>
          </li>
          <li class="list-inline-item">
            <a href="#">
              <i class="fab fa-linkedin-in"></i>
            </a>
          </li>
        </ul>
      </div>
      <div class="col-md-4">
        <ul class="list-inline quicklinks">
          <li class="list-inline-item">
            <a href="#">Privacy Policy</a>
          </li>
          <li class="list-inline-item">
            <a href="#">Terms of Use</a>
          </li>
        </ul>
      </div>
    </div>
  </div>
</footer>

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
