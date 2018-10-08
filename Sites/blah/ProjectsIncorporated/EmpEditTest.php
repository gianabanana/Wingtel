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
  <title>Projects Incorporated Maintenance - Updating of Department Records</title>
  <link rel="stylesheet" href="style.css" type="text/css">
</head>
  
<body>
	<div id="container">
		<?php
			include 'header.php';
		?>
		<br /><br />
		<h1><p align="center"><strong>EDIT A Employee RECORD</strong></p></h1>
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$var_sssno = $_POST['sssno'];
				$SQLQuery = "select * from employee where SSSNo = '$var_sssno'";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$deptobject = mysqli_fetch_object($QueryResult);
		?>
		
		<form action="EmpEditConfirm.php" method="POST">
			<table cellpadding="5" align="center">
				<tr>
					<td> </td>
					<td align="center"><strong><em>Current Data</em></strong></td>
					<td align="center"><strong><em>Data to Edit</em></strong></td>
				</tr>
				<tr>
					<td>SSS No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" name="sssno" id="sssno" readonly="true" value="'.$deptobject->SSSNo.'"></td>';
		?>
				</tr>
				<tr>
					<td>First Name:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->FirstName.'"></td>';
		  			echo '<td><input type="text" name="firstname" id="lastname" value="'.$deptobject->FirstName.'"></td>';
		?>

				</tr>
				<tr>
					<td>Last Name.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->LastName.'"></td>';
		  			echo '<td><input type="text" name="lastname" id="lastname"  value="'.$deptobject->LastName.'"></td>';
		?>

				</tr>
				<tr>
					<td>City Address</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->CityAddress.'"></td>';
		  			echo '<td><input type="text" name="cityaddress" id="cityaddress"  value="'.$deptobject->CityAddress.'"></td>';
		?>

				</tr>
				<tr>
					<td>Zip Code:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->ZipCode.'"></td>';
		  			echo '<td><input type="text" name="deptzipcode" id="deptzipcode"  value="'.$deptobject->ZipCode.'"></td>';
		?>

				</tr>
				<tr>
					<td>Birthdate</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Birthdate.'"></td>';
		  			echo '<td><input type="text" name="birthdate" id="birthdate"  value="'.$deptobject->Birthdate.'"></td>';
		?>

				</tr>
		<tr>
					<td>Age</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Age.'"></td>';
		  			echo '<td><input type="text" name="age" id="age"  value="'.$deptobject->Age.'"></td>';
		?>

				</tr>
		<tr>
					<td>EmpStatus</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->EmpStatus.'"></td>';
		  			echo '<td><input type="text" name="empstatus" id="empstatus"  value="'.$deptobject->EmpStatus.'"></td>';
		?>

				</tr>
		<tr>
					<td>Fee</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Fee.'"></td>';
		  			echo '<td><input type="text" name="fee" id="fee"  value="'.$deptobject->Fee.'"></td>';
		?>

				</tr>
		<tr>
					<td>Salary</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Salary.'"></td>';
		  			echo '<td><input type="text" name="salary" id="salary"  value="'.$deptobject->Salary.'"></td>';
		?>

				</tr>
		<tr>
					<td>RatePerHour</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->RatePerHour.'"></td>';
		  			echo '<td><input type="text" name="rph" id="rph"  value="'.$deptobject->RatePerHour.'"></td>';
		?>

				</tr>
		<tr>
					<td>Department No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" name="deptno" id="deptno" readonly="true" value="'.$deptobject->DeptNo.'"></td>';
		?>
				</tr>
				<tr>
					<td colspan="3"><center><input type="submit" name="submit" value="Update the Employee record" /></center></td>';
				</tr>		
			</table>
		</form>
		<?php
			}
			mysqli_close($DBConnect);
		?>
		
		<p align="center"><a href="maintenance.php">Back to Maintenance Module</a></p>
		<br /><br />
		<?php
			include 'footer.php';
		?>
	</div>
</body>
</html>
DeptEditTest.php
Open with
Oliver Visto 
(oliverivisto@su.edu.ph)
