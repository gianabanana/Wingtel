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
			
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$var_empprojno = $_POST['empprojno'];
				$var_noofhours = $_POST['noofhours'];
				$var_sssno = $_POST['sssno'];
				$var_projno = $_POST['projno'];
						

				$SQLQuery = "select * from empproj";				
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$numrowsDept = mysqli_num_rows($QueryResult);

				if ($numrowsDept > 0) {
					$SQLQuery = "UPDATE empproj SET NoOfHours = '$var_nooofhours', SSSNo = '$var_sssno',ProjNo = '$var_projno' where EmpProjNo='$var_empprojno'";
					mysqli_query($DBConnect, $SQLQuery);
					echo '<p align="center"><font color="blue" size=+1>The record has been updated.</font></p>';
				}
				mysqli_close($DBConnect);
			}
		?>
			
		<p align="center"><a href="maintenance.php">Back to Maintenance Module</a></p>
		<br /><br />
		<?php
			include 'footer.php';
		?>
	</div>
</body>
</html>