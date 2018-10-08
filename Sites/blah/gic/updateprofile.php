<?php

include('session.php');
require 'database.php';

//if(!empty($_POST[]))

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
  <a href="#news" class="w3-bar-item w3-button w3-hide-small w3-padding-large w3-hover-white" title="News">
    <i class="fa fa-globe"></i></a>
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
      <div id="logout" class="w3-dropdown-content w3-bar-block w3-border">
        <a href="updateprofile.php" class="w3-bar-item w3-button">Update profile</a>
        <a href="logout.php" class="w3-bar-item w3-button">Log Out</a>
      </div>
    </div>

    <script>
    function myFunction(){
      var x = document.getElementById("logout");
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
<div class="container">
  <!-- <img src="/img/img_avatar2.png"> -->
  <div id="main">
    <div id="updateprofile">
      <br><br><br><h2>Update Profile</h2>

<?php

$message = '';

$connection = mysql_connect("localhost", "gian23", "kokonat23");
$db = mysql_select_db("gian23_gic", $connection);

if(isset($_POST['update'])){
  $updateQuery = "UPDATE userprofiles SET Username='$_POST[Username]', Firstname='$_POST[Firstname]',
  Lastname='$_POST[Lastname]' WHERE Username='$_POST[hidden]'";
  mysql_query($updateQuery, $connection);

  // $message = 'Successfully updated profile';
  // header("Location: profile.php");
}

$sql = "SELECT * FROM userprofiles WHERE useraccounts_email='$login_session'";
$query = mysql_query($sql, $connection);
echo "<table border=1>
<tr>
<th>Username</th>
<th>First Name</th>
<th>Second Name</th>
<th>Middle Name</th>
<th>Last Name</th>
</tr>";
while($record=mysql_fetch_array($query)){
    echo "<form action=updateprofile.php method=post>";
    echo "<tr>";
    echo "<td>"."<input type=text name=Username value=".$record['Username']." </td>";
    echo "<td>"."<input type=text name=Firstname value=".$record['Firstname']." </td>";
    echo "<td>"."<input type=text name=Firstname value=".$record['Secondname']." </td>";
    echo "<td>"."<input type=text name=Firstname value=".$record['Middlename']." </td>";
    echo "<td>"."<input type=text name=Lastname value=".$record['Lastname'] ." </td>";
    echo "<td>"."<input type=hidden name=hidden value=".$record['Username']." </td>";
    echo "<td>"."<input type=submit name=update value=Update"." </td>";
    echo "</form>";
}
echo "</table>";

?>

         </div>
       </div>
     </div>
</body>
</html>
