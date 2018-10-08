<?php
$connection = mysql_connect("localhost", "root", "root");
$db = mysql_select_db("wingtel", $connection);

session_start();// Starting Session

// Storing Session
$user_check = $_SESSION['login_user'];

// SQL Query To Fetch Complete Information Of User
$ses_sql = mysql_query("SELECT email FROM Passenger WHERE email='$user_check'", $connection);
$row = mysql_fetch_assoc($ses_sql);
$login_session = $row['email'];

// $ses_sql2 = mysql_query("SELECT idBooking FROM Booking WHERE email='$user_check'", $connection);
// $row2 = mysql_fetch_assoc($ses_sql2);
// $login_session2 = $row2['email'];

if(!isset($login_session)){
  mysql_close($connection); // Closing Connection
  header('Location: src/index.html'); // Redirecting To Home Page
}

?>
