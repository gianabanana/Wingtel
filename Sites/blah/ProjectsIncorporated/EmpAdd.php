<?php
	 session_start();
	 if ($_SESSION['login'] != '1') {
	 	session_destroy();
	 	header("Location:login.php");
	 } 
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
	<title>Projects Incorporated</title>
	
	<link rel = "stylesheet" href = "style.css" type = "text/css">
</head>
<body>
<div id="container">
		<?php
			 include "header.php";
		?>
</div>
  <br /><br />
		<p align="center"><font size="+2" color="#004b6f">ADDING OF EMPLOYEE RECORDS</font></p>
			<br />
			<!-- Start of FORM -->
			<form id="empadd" name="empadd" method="POST" action="EmpAddConfirm.php">
				<table border="1" cellpadding="5" align="center">
					<tr>
						<td>SSS No.</td>
						<td><input type="text" name="sssno" size="5" id="sssno" value=""/></td>
					</tr>
					<tr>
						<td>First Name</td>
						<td><input type="text" name="firstname" id="firstname" value=""/></td>
					</tr>
					<tr>
						<td>Last Name</td>
						<td><input type="text" name="lastname" id="lastname" value=""/></td>
					</tr>
<tr>
						<td>City Address</td>
						<td><input type="text" name="cityaddress" size=25 id="cityaddress" value=""/></td>
					</tr>
<tr>
						<td>Zip Code</td>
						<td><input type="text" name="zipcode" size=5 id="zipcode" value=""/></td>
					</tr>
<tr>
						<td>Birth Date</td>
						<td><input type ="text" name="birthdate" size=10 id="birthdate" value=""/></td>
						</tr>
<tr>
						<td>Age</td>
						<td><input type ="text" name="age" size =10 id="age" value=""/></td>
						</tr>
<tr>
						<td>Employee Status</td>
						<td><input type ="text" name="empstatus" size =10 id="empstatus" value=""/></td>
						</tr>
<tr>
						<td>Fee</td>
						<td><input type ="text" name="fee" id="fee" value=""/></td>
						</tr>
<tr>
						<td>Salary</td>
						<td><input type ="text" name="salary" id="salary" value=""/></td>
						</tr>
<tr>
						<td>Rate Per Hour</td>
						<td><input type ="text" name="rateperhour" id="rateperhour" value=""/></td>
						</tr>
<tr>
						<td>Department No.</td>
						<td><input type="text" name="deptno" size="5" id="deptno" value=""/></td>
						</tr>			
	
	<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			
			mysqli_close($DBConnect);
	?>
	
				<tr>
					<td align="center" colspan="2">
						<input type="submit" name="submit" id="submit" value="Add This Record"/>
						&nbsp;&nbsp;&nbsp;
						<input type="reset" name="clear" id="clear" value="Clear Values"/>
					</td>
				</tr>
			</table>
		</form>
			<!-- End of FORM -->
		<br /><br />
		<p align="center"><a href="maintenance.php">Back to Maintenance Module</a></p>
		<br /><br />
		<?php
			 include 'footer.php';
		?>
</body>
</html>

