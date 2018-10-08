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
		<h1><p align="center"><strong>EDIT A PROJECT RECORD</strong></p></h1>
		<form action="ProjEditTest.php" method="POST">
			<table align="center">		
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from project";
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
		?>
				<tr>
					<td>Choose the Project No.: </td>
					<td><select name="projno" id="projno">
		<?php
				while ($deptobject = mysqli_fetch_object($QueryResult)) {
					echo '<option value="'.$deptobject->ProjNo.'">'.$deptobject->ProjNo.' - '.$deptobject->ProjNo.'</option>';
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
DeptEdit.php
Open with
Oliver Visto 
(oliverivisto@su.edu.ph)
Displaying DeptEdit.php.