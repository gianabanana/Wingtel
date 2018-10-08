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
				$var_firstname = $_POST['firstname'];
				$var_lastname = $_POST['lastname'];
				$var_cityaddress = $_POST['cityaddress'];
				$var_zipcode = $_POST['zipcode'];
				$var_birthdate = $_POST['birthdate'];				
				$var_age = $_POST['age'];
				$var_fee = $_POST['empstatus'];	
				$var_salary = $_POST['salary'];	
				$var_rateperhour = $_POST['rateperhour'];	
				$var_deptno = $_POST['deptno'];	
				
				$SQLQuery = "select * from employee";				
				$QueryResult = mysqli_query($DBConnect, $SQLQuery);
				$numrowsDept = mysqli_num_rows($QueryResult);

				if ($numrowsDept > 0) {
					$SQLQuery = "UPDATE employee SET SSSNo='$var_sssno', FirstName='$var_firstname', LastName='$var_lastname', CityAddress ='$var_cityaddress', Zipcode ='$var_zipcode', BirthDate = '$var_birthdate', Age = '$var_age', Fee ='$var_fee', Salary = '$var_Salary', RatePerHour = '$var_rph'  where SSSNo='$var_sssno'";
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