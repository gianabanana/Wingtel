<?php include 'login_validation.php'; ?>
<!DOCTYPE html> 
<html>
<head> 
	<title>PHP Login Form</title>
			
	<link rel="stylesheet"  href="css/password.css" />
	
 </head> 
 <body>
 <div class="container">
	<div class="main">
		<h2> PHP Login Form  </h2><hr/>
		<form action="password_login.php" method="post">
		<label class="heading">Email :</label><br/>
		<input type="text" name="email" /><br><br>
		
		<label class="heading">Password :</label><br/>
		<input type="password" name="password" /><br><br>
		
		<input type="submit" name="submit" Value="SignIn"/>
		<span class="error"><?php echo $Error;?></span>
		<span class="success"><?php echo $successMessage;?></span>
		</form>
	<a class="forgot" href="forgot_password.php">forgot password ?</a>   <a class="login" href="password_form.php">SignUp</a>	
	</div>
	
<!-- Div Fugo is advertisement div-->
	<div class="fugo">
		<a href="http://www.formget.com/app/"><img src="images/formGetadv-1.jpg" /></a>
	</div>
 </div>
</body>
</html>
