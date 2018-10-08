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
		<h1><p align="center"><strong>EDIT A DEPARTMENT RECORD</strong></p></h1>
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$var_projno = $_POST['projno'];
				$SQLQuery = "select * from project where ProjNo = '$var_projno'";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$deptobject = mysqli_fetch_object($QueryResult);
		?>
		
		<form action="ProjEditConfirm.php" method="POST">
			<table cellpadding="5" align="center">
				<tr>
					<td> </td>
					<td align="center"><strong><em>Current Data</em></strong></td>
					<td align="center"><strong><em>Data to Edit</em></strong></td>
				</tr>
				<tr>
					<td>Project No.</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" name="projno" id="projno" readonly="true" value="'.$deptobject->ProjNo.'"></td>';
		?>
				</tr>
				<tr>
					<td>Project Name</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->ProjName.'"></td>';
		  			echo '<td><input type="text" name="projname" id="projname" value="'.$deptobject->ProjName.'"></td>';
		?>

				</tr>
				<tr>
					<td>City:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->City.'"></td>';
		  			echo '<td><input type="text" name="city" id="city"  value="'.$deptobject->City.'"></td>';
		?>

				</tr>
					 <tr>
					<td>Zip Code:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->ZipCode.'"></td>';
		  			echo '<td><input type="text" name="zipcode" id="zipcode"  value="'.$deptobject->ZipCode.'"></td>';
		?>

				</tr>
				<tr>
					<td>SSSNo:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->SSSNo.'"></td>';
		  			echo '<td><input type="text" name="sssno" id="sssno"  value="'.$deptobject->SSSNo.'"></td>';
		?>

				</tr>
				<tr>
					<td>Dept No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->DeptNo.'"></td>';
		  			echo '<td><input type="text" name="deptno" id="deptno"  value="'.$deptobject->DeptNo.'"></td>';
		?>

				</tr>
		
				<tr>
					<td colspan="3"><center><input type="submit" name="submit" value="Update the Department record" /></center></td>';
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