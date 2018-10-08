<?php
session_start(); // Starting Session

$error=''; // Variable To Store Error Message

if(isset($_POST['submit'])){
  // $_SESSION["name"] = $_POST["name"];
  // $_SESSION['last_login_timestamp'] = time();
  // header("location:index.php");
  if(empty($_POST['email']) || empty($_POST['password'])){
    $error = "Email or Password is empty!";
  } else{
    // $_SESSION["name"] = $_POST["name"];
    // Define $username and $password
    $email=$_POST['email'];
    $password=$_POST['password'];
    // Establishing Connection with Server by passing server_name, user_id and password as a parameter
    $connection = mysql_connect("localhost", "gian23", "kokonat23");
    // To protect MySQL injection for Security purpose
    $email = stripslashes($email);
    $password = stripslashes($password);
    $email = mysql_real_escape_string($email);
    $password = mysql_real_escape_string($password);
    // Selecting Database
    $db = mysql_select_db("gian23_gic", $connection);
    // SQL query to fetch information of registered users and finds user match.
    $query = mysql_query("SELECT * FROM useraccounts WHERE email='$email' AND password='$password'", $connection);
    $rows = mysql_num_rows($query);

    if($rows==1){
      if($email=='carlos'){
        header("location: administrator.php");
      } else{
        $_SESSION['login_user']=$email; // Initializing Session

        header("location: profile.php");
      }
    } else{
      $error = "Email or Password is invalid!";
    }
    mysql_close($connection); // Closing Connection
    }
  }
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title></title>
  <link rel="stylesheet" type="text/css" href="login.css">
</head>
<body>
  <div class="container">
    <img src="/img/img_avatar2.png">
    <div id="main">
      <div id="login">
        <h2>Login</h2>
        <form action="" method="post">
          <input id="name" name="email" placeholder="Enter email" type="text">
          <input id="password" name="password" placeholder="Enter password" type="password"><br>
          <input type="submit" name="submit" value="Login" class="btn-login">
          <p>Not yet a member? <a href="register.php">Sign up</a></p><br>
          <p><?php echo $error; ?></p>
        </form>
          <!-- <p>Forgot password?</p> -->
        </form>
      </div>
    </div>
  </div>
  </body>
</html>
