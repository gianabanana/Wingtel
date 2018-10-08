<?php
//Establishing Connection with Server by passing server_name, user_id and password as a parameter
$connection = mysql_connect("localhost", "root", "");
 
//Selecting Database
$db = mysql_select_db("college", $connection);
 
session_start();// Starting Session
 
//Storing session
$email_check=$_SESSION['login_user'];

//SQL query to fetch complete information of user
$ses_sql=mysql_query("select * from registration where email='$email_check'", $connection);
$row = mysql_fetch_assoc($ses_sql);
 
$login_session =$row['name'];
$login_password =$row['password'];
 
if(!isset($login_session)){
 
//Closing Connection
mysql_close($connection);
header('Location: password_login.php');//Redirecting to home page
}
?>