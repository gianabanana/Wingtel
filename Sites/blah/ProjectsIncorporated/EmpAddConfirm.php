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
		<p align="center"><font size="+2" color="#004b6f">ADDING OF EMPLOYEE RECORDS</font></p>
			<br />
					
		<?php
			$DBConnect = mysqli_connect('localhost','root','', 'projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			
			else {
				$var_sssno = $_POST['sssno'];
				$var_firstname = $_POST['firstname'];
				$var_lastname = $_POST['lastname'];
				$var_cityaddress = $_POST['cityaddress'];
				$var_zipcode = $_POST['zipcode'];
				$var_birthdate = $_POST['birthdate'];
				$var_age = $_POST['age'];
				$var_empstatus = $_POST['empstatus'];
				$var_fee = $_POST['fee'];
				$var_salary = $_POST['salary'];
				$var_rateperhour = $_POST['rateperhour'];
				$var_deptno = $_POST['deptno'];
				
				//Employee Query - ready for adding the record
				$SQLQueryEmp = "select * from employee where SSSNo = '$var_sssno'";

				$resultEmp = mysqli_query($DBConnect, $SQLQueryEmp);
				$numrowsEmp = mysqli_num_rows($resultEmp);
				
				if ($numrowsEmp > 0) {
					echo '<p align="center"><font size="+2" color="red">Sorry, cannot add this record. The Employee already exists.</font></p>';
					echo '<p align="center"><font size="+2"><a href="DeptAdd.php">Please enter another one.</a></font></p>';
					echo '<br /><br />';
				}
				if ($numrowsEmp == 0) {
					$SQLQueryEmpAdd = "INSERT INTO employee VALUES('$var_sssno','$var_firstname','$var_lastname','$var_cityaddress', '$var_zipcode', '$var_birthdate', '$var_age', '$var_empstatus', '$var_fee', '$var_salary', '$var_rateperhour', '$var_deptno')";
					mysqli_query($DBConnect, $SQLQueryEmpAdd);
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

