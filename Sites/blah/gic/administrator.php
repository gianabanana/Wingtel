<?php

date_default_timezone_set('Asia/Manila');

function showDate(){
  return date('F j, Y');
}

function showTime(){
  return time('h:i:s A');
}

$showDate = showDate();
$current_date = date('Y-m-d');
$current_time = date('h:i:s A');
$state = $_POST['state'];
$hours = $_POST['hours'];
$resetDate = "0000-00-00";
$resetTime = "00:00:00";
$guest = "walk-in";
$free = "none";
// $_SESSION['last_login_timestamp'] = time();

echo $showDate;

?>

<!DOCTYPE html>
<html>
<head>
  <!-- <link rel="stylesheet" type="text/css" href="style.css"> -->
<script>
function startTime() {
    var today = new Date();
    var h = today.getHours();
    var m = today.getMinutes();
    var s = today.getSeconds();
    m = checkTime(m);
    s = checkTime(s);
    document.getElementById('txt').innerHTML = h + ":" + m + ":" + s;
    var t = setTimeout(startTime, 500);
}
function checkTime(i) {
    if (i < 10) {i = "0" + i};
    return i;
}
</script>
</head>

<body onload="startTime()">

<div id="txt"></div>

<?php

$connection = mysql_connect("localhost", "gian23", "kokonat23");
$db = mysql_select_db("gian23_gic", $connection);

if(isset($_POST['login'])){
  if($state=='happyHour'){
    $rate = 20;
    $balance = $rate*$hours;
    if($hours==1){
      $endDate = date('Y-m-d', strtotime('+1 hour'));
      $endTime = date('h:i:s A', strtotime('+1 hour'));
    } else if($hours==2){
      $endDate = date('Y-m-d', strtotime('+2 hour'));
      $endTime = date('h:i:s A', strtotime('+2 hour'));
    } else if($hours==3){
      $endDate = date('Y-m-d', strtotime('+3 hour'));
      $endTime = date('h:i:s A', strtotime('+3 hour'));
    } else if($hours==4){
      $endDate = date('Y-m-d', strtotime('+4 hour'));
      $endTime = date('h:i:s A', strtotime('+4 hour'));
    } else if($hours==5){
      $endDate = date('Y-m-d', strtotime('+5 hour'));
      $endTime = date('h:i:s A', strtotime('+5 hour'));
    } else if($hours==6){
      $endDate = date('Y-m-d', strtotime('+6 hour'));
      $endTime = date('h:i:s A', strtotime('+6 hour'));
    } else if($hours==7){
      $endDate = date('Y-m-d', strtotime('+7 hour'));
      $endTime = date('h:i:s A', strtotime('+7 hour'));
    } else if($hours==8){
      $endDate = date('Y-m-d', strtotime('+8 hour'));
      $endTime = date('h:i:s A', strtotime('+8 hour'));
    } else if($hours==9){
      $endDate = date('Y-m-d', strtotime('+9 hour'));
      $endTime = date('h:i:s A', strtotime('+9 hour'));
    } else if($hours==10){
      $endDate = date('Y-m-d', strtotime('+10 hour'));
      $endTime = date('h:i:s A', strtotime('+10 hour'));
    } else if($hours==11){
      $endDate = date('Y-m-d', strtotime('+11 hour'));
      $endTime = date('h:i:s A', strtotime('+11 hour'));
    } else if($hours==12){
      $endDate = date('Y-m-d', strtotime('+12 hour'));
      $endTime = date('h:i:s A', strtotime('+12 hour'));
    }
  } else if($state=='regularRate'){
    $rate = 30;
    $balance = $rate*$hours;
    if($hours==1){
      $endDate = date('Y-m-d', strtotime('+1 hour'));
      $endTime = date('h:i:s A', strtotime('+1 hour'));
    } else if($hours==2){
      $endDate = date('Y-m-d', strtotime('+2 hour'));
      $endTime = date('h:i:s A', strtotime('+2 hour'));
    } else if($hours==3){
      $endDate = date('Y-m-d', strtotime('+3 hour'));
      $endTime = date('h:i:s A', strtotime('+3 hour'));
    } else if($hours==4){
      $endDate = date('Y-m-d', strtotime('+4 hour'));
      $endTime = date('h:i:s A', strtotime('+4 hour'));
    } else if($hours==5){
      $endDate = date('Y-m-d', strtotime('+5 hour'));
      $endTime = date('h:i:s A', strtotime('+5 hour'));
    } else if($hours==6){
      $endDate = date('Y-m-d', strtotime('+6 hour'));
      $endTime = date('h:i:s A', strtotime('+6 hour'));
    } else if($hours==7){
      $endDate = date('Y-m-d', strtotime('+7 hour'));
      $endTime = date('h:i:s A', strtotime('+7 hour'));
    } else if($hours==8){
      $endDate = date('Y-m-d', strtotime('+8 hour'));
      $endTime = date('h:i:s A', strtotime('+8 hour'));
    } else if($hours==9){
      $endDate = date('Y-m-d', strtotime('+9 hour'));
      $endTime = date('h:i:s A', strtotime('+9 hour'));
    } else if($hours==10){
      $endDate = date('Y-m-d', strtotime('+10 hour'));
      $endTime = date('h:i:s A', strtotime('+10 hour'));
    } else if($hours==11){
      $endDate = date('Y-m-d', strtotime('+11 hour'));
      $endTime = date('h:i:s A', strtotime('+11 hour'));
    } else if($hours==12){
      $endDate = date('Y-m-d', strtotime('+12 hour'));
      $endTime = date('h:i:s A', strtotime('+12 hour'));
    }
  } else if($state=='studentLounge'){
    $rate = 20;
    $balance = $rate*$hours;
    if($hours==1){
      $endDate = date('Y-m-d', strtotime('+1 hour'));
      $endTime = date('h:i:s A', strtotime('+1 hour'));
    } else if($hours==2){
      $endDate = date('Y-m-d', strtotime('+2 hour'));
      $endTime = date('h:i:s A', strtotime('+2 hour'));
    } else if($hours==3){
      $endDate = date('Y-m-d', strtotime('+3 hour'));
      $endTime = date('h:i:s A', strtotime('+3 hour'));
    } else if($hours==4){
      $endDate = date('Y-m-d', strtotime('+4 hour'));
      $endTime = date('h:i:s A', strtotime('+4 hour'));
    } else if($hours==5){
      $endDate = date('Y-m-d', strtotime('+5 hour'));
      $endTime = date('h:i:s A', strtotime('+5 hour'));
    } else if($hours==6){
      $endDate = date('Y-m-d', strtotime('+6 hour'));
      $endTime = date('h:i:s A', strtotime('+6 hour'));
    } else if($hours==7){
      $endDate = date('Y-m-d', strtotime('+7 hour'));
      $endTime = date('h:i:s A', strtotime('+7 hour'));
    } else if($hours==8){
      $endDate = date('Y-m-d', strtotime('+8 hour'));
      $endTime = date('h:i:s A', strtotime('+8 hour'));
    } else if($hours==9){
      $endDate = date('Y-m-d', strtotime('+9 hour'));
      $endTime = date('h:i:s A', strtotime('+9 hour'));
    } else if($hours==10){
      $endDate = date('Y-m-d', strtotime('+10 hour'));
      $endTime = date('h:i:s A', strtotime('+10 hour'));
    } else if($hours==11){
      $endDate = date('Y-m-d', strtotime('+11 hour'));
      $endTime = date('h:i:s A', strtotime('+11 hour'));
    } else if($hours==12){
      $endDate = date('Y-m-d', strtotime('+12 hour'));
      $endTime = date('h:i:s A', strtotime('+12 hour'));
    }
  } else if($state=='vipRooms'){
    $rate = 200;
    $balance = $rate*$hours;
    if($hours==1){
      $endDate = date('Y-m-d', strtotime('+1 hour'));
      $endTime = date('h:i:s A', strtotime('+1 hour'));
    } else if($hours==2){
      $endDate = date('Y-m-d', strtotime('+2 hour'));
      $endTime = date('h:i:s A', strtotime('+2 hour'));
    } else if($hours==3){
      $endDate = date('Y-m-d', strtotime('+3 hour'));
      $endTime = date('h:i:s A', strtotime('+3 hour'));
    } else if($hours==4){
      $endDate = date('Y-m-d', strtotime('+4 hour'));
      $endTime = date('h:i:s A', strtotime('+4 hour'));
    } else if($hours==5){
      $endDate = date('Y-m-d', strtotime('+5 hour'));
      $endTime = date('h:i:s A', strtotime('+5 hour'));
    } else if($hours==6){
      $endDate = date('Y-m-d', strtotime('+6 hour'));
      $endTime = date('h:i:s A', strtotime('+6 hour'));
    } else if($hours==7){
      $endDate = date('Y-m-d', strtotime('+7 hour'));
      $endTime = date('h:i:s A', strtotime('+7 hour'));
    } else if($hours==8){
      $endDate = date('Y-m-d', strtotime('+8 hour'));
      $endTime = date('h:i:s A', strtotime('+8 hour'));
    } else if($hours==9){
      $endDate = date('Y-m-d', strtotime('+9 hour'));
      $endTime = date('h:i:s A', strtotime('+9 hour'));
    } else if($hours==10){
      $endDate = date('Y-m-d', strtotime('+10 hour'));
      $endTime = date('h:i:s A', strtotime('+10 hour'));
    } else if($hours==11){
      $endDate = date('Y-m-d', strtotime('+11 hour'));
      $endTime = date('h:i:s A', strtotime('+11 hour'));
    } else if($hours==12){
      $endDate = date('Y-m-d', strtotime('+12 hour'));
      $endTime = date('h:i:s A', strtotime('+12 hour'));
    }
  }
  $updateQuery = "UPDATE pc SET DateStarted='$current_date', TimeStarted='$current_time',
  DateEnded='$endDate', TimeEnded='$endTime', State='$state', Hours='$hours', Balance='$balance',
  useraccounts_email='$guest'
  WHERE PC='$_POST[hidden]'";
  mysql_query($updateQuery, $connection);
}

if(isset($_POST['logout'])){
  $updateQuery = "UPDATE pc SET DateStarted='$resetDate', TimeStarted='$resetTime', DateEnded='$resetDate',
  TimeEnded='$resetTime', State='', Hours='', Balance=0,
  useraccounts_email='$free'
  WHERE PC='$_POST[hidden]'";
  mysql_query($updateQuery, $connection);
}

$sql = "SELECT * FROM pc";
$query = mysql_query($sql, $connection);
echo "<br><br>";
echo "<table border=1>
<tr>
<th>PC #</th>
<th>User</th>
<th>Date Started</th>
<th>Time Started</th>
<th>End Date</th>
<th>End Time</th>
<th>State</th>
<th>Hours</th>
<th>Balance</th>
</th>
</tr>";
while($record=mysql_fetch_array($query)){
  echo "<form action=administrator.php method=post>";
  echo "<tr>";
  echo "<td>"."<input type=text name=PC value=".$record['PC']." </td>";
  echo "<td>"."<input type=text name=useraccounts_email value=".$record['useraccounts_email']." </td>";
  echo "<td>"."<input type=text name=DateStarted value=".$record['DateStarted']." </td>";
  echo "<td>"."<input type=text name=TimeStarted value=".$record['TimeStarted'] ." </td>";
  echo "<td>"."<input type=text name=DateEnded value=".$record['DateEnded'] ." </td>";
  echo "<td>"."<input type=text name=TimeEnded value=".$record['TimeEnded'] ." </td>";
  echo "<td>"."<select name=state>
  <option>Select State</option>
  <option value=happyHour>Happy Hour</option>
  <option value=regularRate>Regular Rate</option>
  <option value=studentLounge>Student Lounge</option>
  <option value=vipRooms>VIP Rooms</option>
  </select></td>";
  echo "<td>"."<select name=hours>
  <option>Choose</option>
  <option value=1>1</option>
  <option value=2>2</option>
  <option value=3>3</option>
  <option value=4>4</option>
  <option value=5>5</option>
  <option value=6>6</option>
  <option value=7>7</option>
  <option value=8>8</option>
  <option value=9>9</option>
  <option value=10>10</option>
  <option value=11>11</option>
  <option value=12>12</option>
  </select></td>";
  echo "<td>"."<input type=text name=Balance value=".$record['Balance'] ." </td>";
  echo "<td>"."<input type=hidden name=hidden value=".$record['PC']." </td>";
  echo "<td>"."<input type=submit name=login value=Login" ." </td>";
  echo "<td>"."<input type=submit name=logout value=Logout" ." </td>";
  echo "</tr>";
  echo "</form>";
}
echo "</table>";

?>

<br><br><a href="load.php" class="w3-bar-item w3-button">Load Account</a>
<br><a href="logout.php" class="w3-bar-item w3-button">Log Out</a>
</body>
</html>
