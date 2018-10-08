<?php include 'password_generator.php'; ?>
<!DOCTYPE html> 
<html>
<head> 
	<title>PHP Password Generator</title>
	<link rel="stylesheet"  href="css/password.css" />
			
 </head> 
 <body>
 <div class="container">
	<div class="main">
		<h2>PHP Password Generator </h2><hr/>
		<form action="password_form.php" method="post">
		<label class="heading">Name :</label><br/>
		<input type="text" name="name" />
		<span class="error"><?php echo $nameError;?></span><br><br>
		
		<label class="heading">Email :</label><br/>
		<input type="text" name="email" />
		<span class="error"><?php echo $emailError;?></span><br><br>
		
		<input type="submit" name="submit" Value="SignUp"/>
		<span class="success"><?php echo $successMessage;?></span><br>
		<span class="success"><?php echo $passwordMessage;?></span>
		</form>
		<p><b>Note : </b>Fill this form and password will be send to your email address.</p>
		<a class="login" href="password_login.php">SignIn</a>
	</div>
		
<!-- Div Fugo is advertisement div-->
	<div class="fugo">
		<a href="http://www.formget.com/app/"><img src="images/formGetadv-1.jpg" /></a>
	</div>
 </div>
</body>
</html>
