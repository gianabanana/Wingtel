<?php
/* Attempt MySQL server connection. Assuming you are running MySQL
server with default setting (user 'root' with no password) */
$link = mysqli_connect("localhost", "root", "", "gohotel");

// Check connection
if($link === false){
    die("ERROR: Could not connect. " . mysqli_connect_error());
}

// Attempt select query execution
$sql = "SELECT * FROM branch";
if($result = mysqli_query($link, $sql)){
    if(mysqli_num_rows($result) > 0){
            echo "<br>";
            echo "<br>";
            echo "<br>";
            echo "<br>";
            echo "<br>";
            echo "<table>";
            echo "<tr>";
                echo "<th>id</th>";
                echo "<th>Branch Name</th>";
                echo "<th>Address</th>";
                echo "<th>Overview</th>";
                echo "<br>";
            echo "</tr>";
        while($row = mysqli_fetch_array($result)){
            echo "<tr>";
                echo "<td>" . $row['branchID'] . "</td>";
                echo "<td>" . $row['branchName'] . "</td>";
                echo "<td>" . $row['address'] . "</td>";
                echo "<td>" . $row['overview'] . "</td>";
            echo "</tr>";
        }
        echo "</table>";
        // Free result set
        mysqli_free_result($result);
    } else{
        echo "No records matching your query were found.";
    }
} else{
    echo "ERROR: Could not able to execute $sql. " . mysqli_error($link);
}

// Close connection
mysqli_close($link);
?>

<!DOCTYPE html>
<html lang="en">
<header>
  <link rel = "icon" href = "iconpic/goshort.png" />
    <meta charset="UTF-8">
    <title>List of Branches</title>
    <link rel="stylesheet" href="style.css" />
</header>

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
          <li><a href="index.html">HOME</a></li>
          <li><span style="font-size:20px;cursor:pointer" onclick="openNav()">&#9776;
              Menu</span></li>
        </ul>
  </div>
</div>
</banner>

</body>
