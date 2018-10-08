<?php
include('src/session.php');

require 'src/database.php';

$flightNumber = $_GET['flightNumber'];

$query4 = "SELECT Schedule_idSchedule FROM Flight WHERE idFlight = '$flightNumber'";
$result9 = mysql_query($query4, $connection);
while($row6=mysql_fetch_array($result9)){
  $idSchedule = $row6['Schedule_idSchedule'];
}
$query5 = "DELETE FROM Flight WHERE Schedule_idSchedule = '$idSchedule'";
mysql_query($query5, $connection);

$query3 = "DELETE FROM Schedule WHERE idSchedule = '$idSchedule'";
if(mysql_query($query3, $connection)===TRUE){
  header("Refresh: 3; url=src/administrator.php");
  echo "Successfully deleted flight!";
} else{
  echo "There was an error upon deleting. Please enter an existing flight number.";
}
?>
