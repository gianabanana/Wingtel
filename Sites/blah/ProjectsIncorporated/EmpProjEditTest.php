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
		<h1><p align="center"><strong>EDIT A EMPLOYEE PROJECT RECORD</strong></p></h1>
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$var_empprojno = $_POST['empprojno'];
				$SQLQuery = "select * from empproj where EmpProjNo = '$var_empprojno'";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$deptobject = mysqli_fetch_object($QueryResult);
		?>
		
		<form action="EmpProjEditConfirm.php" method="POST">
			<table cellpadding="5" align="center">
				<tr>
					<td> </td>
					<td align="center"><strong><em>Current Data</em></strong></td>
					<td align="center"><strong><em>Data to Edit</em></strong></td>
				</tr>
				<tr>
					<td>Employee Project No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" name="empprojno" id="empprojno" readonly="true" value="'.$deptobject->EmpProjNo.'"></td>';
		?>
				</tr>
				<tr>
					<td>No. Of Hours:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->NoOfHours.'"></td>';
		  			echo '<td><input type="text" name="noofhours" id="noofhours" value="'.$deptobject->NoOfHours.'"></td>';
		?>

				</tr>
				<tr>
					<td>SSS No.:</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->SSSNo.'"></td>';
		  			echo '<td><input type="text" name="sssno" id="sssno"  value="'.$deptobject->SSSNo.'"></td>';
		?>

				</tr>
				<tr>
					<td>Project No.</td>
		<?php
					echo '<td bgcolor="lightgray"><input type="text" readonly="true" value="'.$deptobject->ProjNo.'"></td>';
		  			echo '<td><input type="text" name="projno" id="projno"  value="'.$deptobject->ProjNo.'"></td>';
		?>

				</tr>
				
				<tr>
					<td colspan="3"><center><input type="submit" name="submit" value="Update the empproj record" /></center></td>';
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