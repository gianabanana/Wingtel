<?php

session_start();

$message = '';

if(isset($_SESSION['login_user'])){
  //header("Location: /");
}

require 'database.php';

if(!empty($_POST['email']) && !empty($_POST['password'])):
  $sql = "INSERT INTO useraccounts(email, password) VALUES(:email, :password)";
  $stmt = $conn->prepare($sql);
  $stmt->bindParam(':email', $_POST['email']);
  $stmt->bindParam(':password', $_POST['password']);
  $_SESSION['email'] = $_POST['email'];

  if($stmt->execute()):
    $message = 'Successfully created new user';
    header("Location: information.php");
  else:
    $message = 'Sorry there must have been an issue creating your account';
  endif;
endif;

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title></title>
    <link rel="stylesheet" type="text/css" href="register.css">
</head>

<body>
  <!-- <div class="header">
     <br /><br /><br /><br /><a href="/">GIC</a>
  </div> -->

<div class="container">
  <img src="/img/img_avatar2.png">
  <div id="main">
    <div id="register">
      <h2>Register</h2>
      <form action="" method="post">
        <input id="name" name="email" placeholder="Enter email" type="text">
        <input id="password" name="password" placeholder="Enter password" type="password">
        <input id="password" name="confirmPassword" placeholder="Confirm password" type="password"><br>
        <input type="submit" name="submit" value="Register" class="btn-register">
        <p>Already a member? <a href="login.php">Log in</a></p><br>
        <p><?php echo $message; ?></p>
        </form>
      </div>
    </div>
  </div>
</body>
</html>
