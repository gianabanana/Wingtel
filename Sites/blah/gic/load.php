<html>
<head>
  <?php
  date_default_timezone_set('Asia/Manila');

  function showDate(){
    return date('F j, Y');
  }

  function showTime(){
    return time('h:i:s A');
  }

  $showDate = showDate();
  $hours = $_POST['hours'];
  $remainingTime = $_POST['remainingTime'];

  echo $showDate;

  ?>

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

  <body onload="startTime()">

  <div id="txt"></div>

  <?php
  $connection = mysql_connect("localhost", "gian23", "kokonat23");
  $db = mysql_select_db("gian23_gic", $connection);

  if(isset($_POST['add'])){
    if($hours==1){
      $add = date('h:i:s', strtotime('+1 hour', strtotime($remainingTime)));
    } else if($hours==2){
      $add = date('h:i:s', strtotime('+2 hour', strtotime($remainingTime)));
    } else if($hours==3){
      $add = date('h:i:s', strtotime('+3 hour', strtotime($remainingTime)));
    } else if($hours==4){
      $add = date('h:i:s', strtotime('+4 hour', strtotime($remainingTime)));
    } else if($hours==5){
      $add = date('h:i:s', strtotime('+5 hour', strtotime($remainingTime)));
    } else if($hours==6){
      $add = date('h:i:s', strtotime('+6 hour', strtotime($remainingTime)));
    } else if($hours==7){
      $add = date('h:i:s', strtotime('+7 hour', strtotime($remainingTime)));
    } else if($hours==8){
      $add = date('h:i:s', strtotime('+8 hour', strtotime($remainingTime)));
    } else if($hours==9){
      $add = date('h:i:s', strtotime('+9 hour', strtotime($remainingTime)));
    } else if($hours==10){
      $add = date('h:i:s', strtotime('+10 hour', strtotime($remainingTime)));
    } else if($hours==11){
      $add = date('h:i:s', strtotime('+11 hour', strtotime($remainingTime)));
    } else if($hours==12){
      $add = date('h:i:s', strtotime('+12 hour', strtotime($remainingTime)));
    }
     $updateQuery = "UPDATE useraccounts SET remainingTime='$add' WHERE email='$_POST[email]'";
     mysql_query($updateQuery, $connection);
  }

  $sql = "SELECT * FROM useraccounts";
  $query = mysql_query($sql, $connection);
  echo "<br><br>";
  echo "<table border=1>
  <tr>
  <th>Account</th>
  <th>Remaining Time</th>
  <th>Hours</th>
  </th>
  </tr>";
  while($record=mysql_fetch_array($query)){
    echo "<form action=load.php method=post>";
    echo "<tr>";
    echo "<td>"."<input type=text name=email value=".$record['email']." </td>";
    echo "<td>"."<input type=text name=remainingTime value=".$record['remainingTime']." </td>";
    echo "<td>"."<select name=hours>
    <option>Choose</option>
    <option value=1>1 hour</option>
    <option value=2>2 hours</option>
    <option value=3>3 hours</option>
    <option value=4>4 hours</option>
    <option value=5>5 hours</option>
    <option value=6>6 hours</option>
    <option value=7>7 hours</option>
    <option value=8>8 hours</option>
    <option value=9>9 hours</option>
    <option value=10>10 hours</option>
    <option value=11>11 hours</option>
    <option value=12>12 hours</option>
    </select></td>";
    echo "<td>"."<input type=submit name=add value=Add" ." </td>";
    echo "</tr>";
    echo "</form>";
  }
  echo "</table>";

  ?>
  <br><br><a href="administrator.php" class="w3-bar-item w3-button">Back</a>
</head>
</html>
