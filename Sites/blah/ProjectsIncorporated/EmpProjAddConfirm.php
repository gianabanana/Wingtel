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
<br /><br />
		<p align="center"><font size="+2" color="#004b6f">ADDING OF EMPLOYEE PROJECT RECORDS</font></p>
			<br />
					
		<?php
			$DBConnect = mysqli_connect('localhost','root','', 'projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			
			else {
				$var_empprojno = $_POST['empprojno'];
				$var_noofhours = $_POST['noofhours'];
				$var_sssno = $_POST['sssno'];
				$var_projno = $_POST['projno'];
			
				
				//Departmemt Query - ready for adding the record
				$SQLQueryempproj = "select * from empproj where EmpProjNo = '$var_empprojno'";

				$resultempproj = mysqli_query($DBConnect, $SQLQueryempproj);
				$numrowsempproj = mysqli_num_rows($resultempproj);
				
				if ($numrowsempproj > 0) {
					echo '<p align="center"><font size="+2" color="red">Sorry, cannot add this record. The Department ID is already existing.</font></p>';
					echo '<p align="center"><font size="+2"><a href="EmpProjAdd.php">Please enter another one.</a></font></p>';
					echo '<br /><br />';
				}
				if ($numrowsempproj == 0) {
					$SQLQueryEmpProjAdd = "INSERT INTO empproj VALUES('$var_empprojno', '$var_noofhours', '$var_sssno, '$var_projno')";
					mysqli_query($DBConnect, $SQLQueryEmpProjAdd);
					echo '<p align="center"><font size="+2" color="blue">The record was successfully saved.</font></p>';
				}
			} //end of else
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


  </body>
</html>
  </body>
</html>