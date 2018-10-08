<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("deletebydate", $con);
$curdate=date("Y/m/d");
mysql_query("DELETE FROM listoffile WHERE expiry='$curdate'");
mysql_close($con);
?> 
<div align='center'><a href="index.php">Add New</a> | <a href="archives.php">Archives</a></div>
<br />
<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("deletebydate", $con);

$result = mysql_query("SELECT * FROM listoffile");
echo "<div align='center'>Note: the data will automatically deleted when it reach the expiry date"."</div><br>";
echo "<table width='444' border='1' align='center' cellpadding='0' cellspacing='0'>
<tr>
<th>Description</th>
<th>Content</th>
<th>Expiry date</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td><div align='center'>" . $row['description'] . "</td>";
  echo "<td><div align='center'>" . $row['content'] . "</td>";
  echo "<td><div align='center'>" . $row['expiry'] . "</td>";
  echo "</tr>";
  }
echo "</table>";

mysql_close($con);
?> 