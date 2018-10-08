<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
  <title>Projects Incorporated Maintenance</title>
  <link rel="stylesheet" href="style.css" type="text/css">
</head>
  
<body>
	<div id="container">
		<?php
			 include 'header.php';
		?>
		<br /><br />
		<center>
			<font size="+2" color="#004b6f">Log-In</font>
			<br /><br />
			<!-- Start of FORM -->
			<form id="login" name="login" method="POST" action="loginconfirm.php">
				<table border=0 align="center">
				<p>User Name: <input type="text" name="usern" id="usern" value=""/>
				<p>Password: <input type="password" name="passwd" id="passwd" value=""/>
				<p><input type="submit" name="submit" id="submit" value="Log-In"/>&nbsp;&nbsp;&nbsp;
				<input type="reset" name="clear" id="clear" value="Clear Values"/>
			</form>
			<!-- End of FORM -->
		</center>
		<br /><br />
		<?php
			 include 'footer.php';
		?>
	</div>
</body>
</html>