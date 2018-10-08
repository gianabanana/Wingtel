<?php

session_start();

include('session.php');

date_default_timezone_set('Asia/Manila');

function showDate(){
  return date('F j, Y');
}

function showTime(){
  return time('h:i:s A');
}

$connection = mysql_connect("localhost", "gian23", "kokonat23");
$db = mysql_select_db("gian23_gic", $connection);

$current_date = date('Y-m-d');
$current_time = date('h:i:s A');
$PC = $_POST['pc'];
// $resetDate = "0000-00-00";
// $resetTime = "00:00:00";
// $free = "none";
$remainingTime = $_POST['remainingTime'];
//$endTime = $current_time + $remainingTime;
$endTime = date('h:i:s', strtotime('$current_time', strtotime($remainingTime)));

$error='';

if(isset($_POST['submit'])){
  $updateQuery = "UPDATE pc SET DateStarted='$current_date', TimeStarted='$current_time',
  DateEnded='$endDate', TimeEnded='$endTime', useraccounts_email='$login_session' WHERE PC='$PC'";
  mysql_query($updateQuery, $connection);
}

$sql = "SELECT * FROM useraccounts";
$query = mysql_query($sql, $connection);
  while($record=mysql_fetch_array($query)){
    "<tr>";
    "<td>"."<input type=text name=useraccounts_email value=".$record['email']." </td>";
    "<td>"."<input type=text name=remainingTime value=".$record['remainingTime']." </td>";
    "<td>"."<input type=hidden name=hidden value=".$record['remainingTime']." </td>";
    "</tr>";
  }

?>

<!DOCTYPE html>
<html>
<head>
  <title></title>
  <!-- <link href="style.css" rel="stylesheet" type="text/css"> -->
</head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
<link rel="stylesheet" href="https://www.w3schools.com/lib/w3-theme-blue-grey.css">
<link rel='stylesheet' href='https://fonts.googleapis.com/css?family=Open+Sans'>
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
<script type="text/javascript">
  function start_countdown(){
    var remainingTime = "<?php echo $remainingTime; ?>";
    var counter = 3600;
    myVar = setInterval(function(){
      if(counter>=0){
        document.getElementById("countdown").innerHTML="You will be logged out in <br>"+counter+" sec";
      }
      if(counter==0){
        $.ajax({
          type:'post',
          url:'logout.php',
          data:{
            logout:"logout"
          },
          success: function(response){
            window.location="index.php";
          }
        });
      }
      counter--;
    }, 1000)
  }
</script>

<style>
html,body,h1,h2,h3,h4,h5 {font-family: "Open Sans", sans-serif}
</style>

<body class="w3-theme-l5">
  <div class="w3-top">
 <div class="w3-bar w3-theme-d2 w3-left-align w3-large">
  <a class="w3-bar-item w3-button w3-hide-medium w3-hide-large w3-right w3-padding-large w3-hover-white w3-large w3-theme-d2" href="javascript:void(0);" onclick="openNav()">
    <i class="fa fa-bars"></i></a>
  <a href="profile.php" class="w3-bar-item w3-button w3-padding-large w3-theme-d4">
    <i class="fa fa-home"></i></a>

  <!-- <a href="#news" class="w3-bar-item w3-button w3-hide-small w3-padding-large w3-hover-white" title="News">
    <i class="fa fa-globe"></i></a> -->

    <div class="w3-dropdown-click">
      <button onclick="myFunction()" class="w3-button w3-padding-large" title="News">
        <i class="fa fa-globe"></i></button>
        <!-- <img src="/img/img_avatar2.png" class="w3-circle" style="height:25px;width:25px" alt="Avatar"></button> -->
        <div id="news" class="w3-dropdown-content w3-bar-block w3-border">
          <a href="promos.php" class="w3-bar-item w3-button">Promos</a>
        </div>
      </div>

  <a href="#accountsettings" class="w3-bar-item w3-button w3-hide-small w3-padding-large w3-hover-white" title="Account Settings">
    <i class="fa fa-user"></i></a>
  <a href="#messages" class="w3-bar-item w3-button w3-hide-small w3-padding-large w3-hover-white" title="Messages">
    <i class="fa fa-envelope"></i></a>
  <div class="w3-dropdown-hover w3-hide-small">
    <button class="w3-button w3-padding-large" title="Notifications">
      <i class="fa fa-bell"></i><span class="w3-badge w3-right w3-small w3-green">3</span></button>
    <div class="w3-dropdown-content w3-card-4 w3-bar-block" style="width:300px">
      <a href="#" class="w3-bar-item w3-button">One new friend request</a>
      <a href="#" class="w3-bar-item w3-button">John Doe posted on your wall</a>
      <a href="#" class="w3-bar-item w3-button">Jane likes your post</a>
    </div>
  </div>
  <div class="w3-dropdown-click">
    <button onclick="myFunction()" class="w3-button w3-padding-large" title="My Account">
      <img src="/img/img_avatar2.png" class="w3-circle" style="height:25px;width:25px" alt="Avatar"></button>
      <div id="myaccount" class="w3-dropdown-content w3-bar-block w3-border">
        <a href="updateprofile.php" class="w3-bar-item w3-button">Update profile</a>
        <a href="logout.php" class="w3-bar-item w3-button">Log Out</a>
        <!-- <a type="submit" name="logout" class="w3-bar-item w3-button">Log Out</a> -->
        <!-- <input type="submit" name="logout" value="Log Out" class="btn-use"> -->
      </div>
    </div>

    <script>
    function myFunction(){
      var x = document.getElementById("myaccount");
      if (x.className.indexOf("w3-show") == -1){
        x.className += " w3-show";
      } else{
        x.className = x.className.replace(" w3-show", "");
      }
    }
    </script>
  </div>
 </div>

<!-- Navbar on small screens -->
<div id="navDemo" class="w3-bar-block w3-theme-d2 w3-hide w3-hide-large w3-hide-medium w3-large">
  <a href="#" class="w3-bar-item w3-button w3-padding-large">Link 1</a>
  <a href="#" class="w3-bar-item w3-button w3-padding-large">Link 2</a>
  <a href="#" class="w3-bar-item w3-button w3-padding-large">Link 3</a>
  <a href="#" class="w3-bar-item w3-button w3-padding-large">My Profile</a>
</div>

<div class="w3-container w3-content" style="max-width:1400px;margin-top:80px">
  <!-- The Grid -->
  <div class="w3-row">
    <!-- Left Column -->
    <div class="w3-col m3">
      <!-- Profile -->
      <div id="profile">
        <b id="welcome">Welcome <i><?php echo $login_session; ?></i> !</b>
        <!-- <b id="logout"><a href="logout.php">Log Out</a></b> -->
      </div>
      <div class="w3-card-2 w3-round w3-white">
        <div class="w3-container">
         <h4 class="w3-center">My Profile</h4>
         <p class="w3-center"><img src="/w3images/avatar3.png" class="w3-circle" style="height:106px;width:106px" alt="Avatar"></p>

         <!-- <hr>
         <p><i class="fa fa-pencil fa-fw w3-margin-right w3-text-theme"></i> Designer, UI</p>
         <p><i class="fa fa-home fa-fw w3-margin-right w3-text-theme"></i> London, UK</p>
         <p><i class="fa fa-birthday-cake fa-fw w3-margin-right w3-text-theme"></i> April 1, 1988</p> -->

         <form action="" method="post">
           <select class="col-md-4" name="pc">
             <?php
             $res=mysql_query("SELECT * FROM pc", $connection);
             while($row=mysql_fetch_array($res)){
               ?>
               <option>
                 <?php
                 echo $row["PC"];
                 ?>
               </option>
               <?php
             }
             ?>
           </select>
           <input type="submit" name="submit" value="USE" class="btn-use">
         </form>

         <?php
         if($_SESSION["login_user"]==$login_session){
           ?>
           <script>start_countdown();</script>
           <h1>This is Profile page</h1>
           <p id="countdown"></p>
           <?php
         } else{
           ?>
           <h1>Home</h1>
           <?php
         }
         ?>

<hr>
<p><a href="voucher.php">Promos</a></p>

        </div>
      </div>
      <br>

</body>
</html>
