<?php
require_once 'config.php';




$sql = "SELECT * FROM booking WHERE idCustomer = ?";
if($stmt = mysqli_prepare($link, $sql)){
    // Bind variables to the prepared statement as parameters
    mysqli_stmt_bind_param($stmt, "s",$param_idcustomer);

    // Set parameters ($param_num is the room number from the database)
    //comparing room number between the database and the selected
    $$param_idcustomer =  $_SESSION["id"];

    if(mysqli_stmt_execute($stmt)){
      $result2 = mysqli_stmt_get_result($stmt);

      while($row = mysqli_fetch_array($result2,MYSQLI_BOTH)){
        echo($row["bookingNo"]);
        echo "someting";

      }
    }
        mysqli_stmt_close($stmt);
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Welcome</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
    <link rel="stylesheet" href="style.css" />
</head>


<body>
	<banner>
		<div id="banner">
		<div id="logo">
			<img src="iconpic/go.png">
		</div>

			<div class="contactnum">
				<p> Call to book at +639368445144/+639152190503 </p>
			</div>

			<div id="inside">
				<ul>
					<li><a href="showbranch.php">BRANCHES</a></li>
					<li><a href="#">ABOUT</a></li>
					<li><a href="#">SERVICES</a></li>
          <li><a href="#">CLIENTS</a></li>
					<li><span style="font-size:20px;cursor:pointer" onclick="openNav()">&#9776;
							Menu</span></li>
				</ul>
	</div>
</div>
</banner>
<br><br><br><br><br><br><br><br><br><br><br>

</body>
</html>
