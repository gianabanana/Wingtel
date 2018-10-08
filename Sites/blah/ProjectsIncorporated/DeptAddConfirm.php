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
		<p align="center"><font size="+2" color="#004b6f">ADDING OF DEPARTMENT RECORDS</font></p>
			<br />
					
		<?php
			$DBConnect = mysqli_connect('localhost','root','', 'projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			
			else {
				$var_deptno = $_POST['deptno'];
				$var_deptname = $_POST['deptname'];
				$var_depttelno = $_POST['depttelno'];
				$var_deptcity = $_POST['deptcity'];
				$var_deptzipcode = $_POST['deptzipcode'];
				
				//Departmemt Query - ready for adding the record
				$SQLQueryDept = "select * from department where DeptNo = '$var_deptno'";

				$resultDept = mysqli_query($DBConnect, $SQLQueryDept);
				$numrowsDept = mysqli_num_rows($resultDept);
				
				if ($numrowsDept > 0) {
					echo '<p align="center"><font size="+2" color="red">Sorry, cannot add this record. The Department ID is already existing.</font></p>';
					echo '<p align="center"><font size="+2"><a href="DeptAdd.php">Please enter another one.</a></font></p>';
					echo '<br /><br />';
				}
				if ($numrowsDept == 0) {
					$SQLQueryDeptAdd = "INSERT INTO department VALUES('$var_deptno','$var_deptname','$var_depttelno','$var_deptcity', '$var_deptzipcode')";
					mysqli_query($DBConnect, $SQLQueryDeptAdd);
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

