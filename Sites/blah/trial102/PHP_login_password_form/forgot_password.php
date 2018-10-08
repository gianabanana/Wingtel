<?php include 'forgot_password_generate.php'; ?>
<!DOCTYPE html> 
<html>
<head> 
	<title>PHP Forgot Password</title>
			
	<link rel="stylesheet"  href="css/password.css" />
	
 </head> 
 <body>
 <div class="container">
	<div class="main">
		<h2> Forgot Password  </h2><hr/>
		<form action="forgot_password.php" method="post">
		<label class="heading">Email :</label><br/>
		<input type="text" name="email" /><br><br>
		
		<input type="submit" name="submit" Value="Resend Password"/>
		<span class="error"><?php echo $Error;?></span>
		<span class="success"><?php echo $successMessage;?></span>
		</form>
	<p><b>Note : </b>Enter your email, password will be send to your email address.</p>	
	<a class="login" href="password_login.php">SignIn</a>
	</div>
	
<!-- Div Fugo is advertisement div-->
	<div class="fugo">
		<a href="http://www.formget.com/app/"><img src="images/formGetadv-1.jpg" /></a>
	</div>
 </div>
</body>
</html>
