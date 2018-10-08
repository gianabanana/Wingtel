<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("deletebydate", $con);
$numdays=$_POST['numdays'];
$content=$_POST['content'];
$description=$_POST['description'];
$tomorrow = mktime(0,0,0,date("m"),date("d")+$numdays,date("Y"));
$dats=date("Y/m/d", $tomorrow);
mysql_query("INSERT INTO listoffile(description, content, expiry)VALUES('$description', '$content', '$dats')");
header("location: index.php");
mysql_close($con);
?> 