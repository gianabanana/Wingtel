<?php

session_start();

$message = '';

if(isset($_SESSION['login_user'])){
  //header("Location: /");
}

require 'database.php';

if(!empty($_POST['Username']) && !empty($_POST['Firstname']) && !empty($_POST['Secondname']) &&
!empty($_POST['Middlename']) && !empty($_POST['Lastname'])):
  $sql = "INSERT INTO userprofiles(Username, Firstname, Secondname, Middlename, Lastname,
    useraccounts_email) VALUES(:Username, :Firstname, :Secondname, :Middlename, :Lastname,
      :useraccounts_email)";
  $stmt = $conn->prepare($sql);
  $stmt->bindParam(':Username', $_POST['Username']);
  $stmt->bindParam(':Firstname', $_POST['Firstname']);
  $stmt->bindParam(':Secondname', $_POST['Secondname']);
  $stmt->bindParam(':Middlename', $_POST['Middlename']);
  $stmt->bindParam(':Lastname', $_POST['Lastname']);
  $stmt->bindParam(':useraccounts_email', $_SESSION['email']);

  if($stmt->execute()):
    $message = 'Successfully created new user';
    header("Location: login.php");
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
    <link rel="stylesheet" type="text/css" href="information.css">
</head>

<body>
  <!-- <div class="header">
     <br /><br /><br /><br /><a href="/">GIC</a>
  </div> -->

  <div class="container">
    <img src="/img/img_avatar2.png">
    <div id="main">
      <div id="register">
        <h2>Profile</h2>
        <form action="" method="post">
          <input id="Username" name="Username" placeholder="Enter desired username" type="text">
          <input id="Firstname" name="Firstname" placeholder="Enter first name" type="text">
          <input id="Secondname" name="Secondname" placeholder="Enter second name" type="text">
          <input id="Middlename" name="Middlename" placeholder="Enter middle name" type="text">
          <input id="Lastname" name="Lastname" placeholder="Enter last name" type="text"><br>
          <!-- <input id="password" name="confirmPassword" placeholder="Enter birthday" type="password"> -->
          <input type="submit" name="enter" value="Enter" class="btn-enter">
          <!-- <p>Already a member? <a href="login.php">Log in</a></p><br> -->
          <p><?php echo $message; ?></p>
          </form>
        </div>
      </div>
    </div>
</body>
</html>
