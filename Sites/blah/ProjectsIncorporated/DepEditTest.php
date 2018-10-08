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
  <title>Projects Incorporated Maintenance - Updating of Dependent Records</title>
  <link rel="stylesheet" href="style.css" type="text/css">
</head>
  
<body>
	<div id="container">
		<?php
			include 'header.php';
		?>
		<br /><br />
		<h1><p align="center"><strong>EDIT A DEPENDANT RECORD</strong></p></h1>
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$var_dependantno = $_POST['dependantno'];
				$SQLQuery = "select * from dependant where DependantNo = '$var_dependantno'";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$deptobject = mysqli_fetch_object($QueryResult);
		?>
		
		<form action="DepEditConfirm.php" method="POST">
			<table cellpadding="5" align="center">
				<tr>
					<td> </td>
					<td align="center"><strong><em>Current Data</em></strong></td>
					<td align="center"><strong><em>Data to Edit</em></strong></td>
				</tr>
				<tr>
					<td>Dependant No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->DependantNo.'"></td>';
		  			echo '<td><input type="text" name="dependantno" id="dependantno" value="'.$deptobject->DependantNo.'"></td>';
		?>

				</tr>
				
				<tr>
					<td> FirstName:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->FirstName.'"></td>';
		  			echo '<td><input type="text" name="firstname" id="firstname" value="'.$deptobject->FirstName.'"></td>';
		?>

				</tr>
				<tr>
					<td>LastName:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->LastName.'"></td>';
		  			echo '<td><input type="text" name="lastname" id="lastname"  value="'.$deptobject->LastName.'"></td>';
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
					<td>Gender</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Gender.'"></td>';
		  			echo '<td><input type="text" name="g" id="g"  value="'.$deptobject->Gender.'"></td>';
		?>

				</tr>
				<tr>
					<td>Relationship</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->Relationship.'"></td>';
		  			echo '<td><input type="text" name="relationship" id="relationship"  value="'.$deptobject->Relationship.'"></td>';
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
					<td>SSSNo:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" name="sssno" id="sssno" readonly="true" value="'.$deptobject->SSSNo.'"></td>';
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