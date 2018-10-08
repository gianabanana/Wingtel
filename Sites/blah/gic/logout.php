<?php

session_start();

include('session.php');

$connection = mysql_connect("localhost", "gian23", "kokonat23");
$db = mysql_select_db("gian23_gic", $connection);

$resetDate = "0000-00-00";
$resetTime = "00:00:00";
$free = "none";

$updateQuery = "UPDATE pc SET DateStarted='$resetDate', TimeStarted='$resetTime', DateEnded='$resetDate',
TimeEnded='$resetTime', State='', Hours='', Balance=0, useraccounts_email='$free'
WHERE useraccounts_email='$login_session'";
mysql_query($updateQuery, $connection);

session_unset();
session_destroy();
header("Location: index.php");

?>
