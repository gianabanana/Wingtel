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
		<h1><p align="center"><strong>EDIT A Employee Project RECORD</strong></p></h1>
		<form action="EmpProjEditTest.php" method="POST">
			<table align="center">		
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from empproj";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
		?>
				<tr>
					<td>Choose the Employee Project No.: </td>
					<td><select name="empprojno" id="empprojno">
		<?php
				while ($deptobject = mysqli_fetch_object($QueryResult)) {
					echo '<option value="'.$deptobject->EmpProjNo.'">'.$deptobject->EmpProjNo.' - '.$deptobject->EmpProjNo.'</option>';
				}
		?>
						</select>
					</td>
		<?php
			}
			mysqli_close($DBConnect);
		?>
				<td><input type="submit" name="submit" value="Display the details of this record."/></td>
			</table>
		</form>
		<br />
		<p align="center"><a href="maintenance.php">Back to the Maintenance Module</a></p>
		<br /><br />
		<?php
			include 'footer.php';
		?>
	</div>
</body>
</html>
