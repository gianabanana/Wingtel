<?php
	 session_start();
	 ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
  <title>Administrator Log-In Confirmation</title>
  <link rel="stylesheet" href="style.css" type="text/css">
</head>
  
<body>
	<div id="container">
		<?php
			 include 'header.php';
		?>
		<br /><br />
				
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from employee";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$frm_username = $_POST['usern'];
				$frm_password = $_POST['passwd'];
				$SQLQuery = "select FirstName, username, password from employee where username = '$frm_username' and password = '$frm_password'";
				$result = mysqli_query($DBConnect, $SQLQuery);
				$numrows = mysqli_num_rows($result);
				
				if ($numrows > 0) {
				   $_SESSION['usern'] = $_POST['usern'];
				   $usern1 = $_SESSION['usern'];
				   echo '<font size="2">You are logged in as, <strong>'.$usern1.'</strong></font>';
				   $_SESSION['login'] = '1';

					$user = mysqli_fetch_object($result);
					echo '<p align="center"><font size="+2" color="#004b6f">Log-in is successful.</font></p>';
					echo '<p align="center"><font size="+1">Welcome, '.$user->FirstName.'!</font></p>';
					echo '<p align="center"><font size="+1"><a href="maintenance.php">Proceed to the Administrator\'s Page</a></font></p>';
					echo '<br /><br />';
				}
				if ($numrows == 0) {
				   	$_SESSION['login'] = ' ';			
					echo '<p align="center"><font size="+2" color="red">Sorry, incorrect username and/or password.</font></p>';
					echo '<p align="center"><font size="+1">Please <a href="login.php">Log-in again.</a></font></p>';
				}
			} //end of else
			mysqli_close($DBConnect);
		?>
		<br /><br />
		<?php
			 include 'footer.php';
		?>
	</div>
</body>
</html> 