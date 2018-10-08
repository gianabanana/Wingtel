<?php
	 session_start();
	 if ($_SESSION['login'] != '1') {
	 	session_destroy();
	 	header("Location:login.php");
	 } 
?>

<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="generator" content="CoffeeCup HTML Editor (www.coffeecup.com)">
    <meta name="created" content="Thu, 08 Sep 2016 00:53:49 GMT">
    <meta name="description" content="">
    <meta name="keywords" content="">
    <title></title>
    
    <!--[if IE]>
    <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
  </head>
  <body>
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
		<p align="center"><font size="+2" color="#004b6f">ADDING OF DEPENDANT RECORDS</font></p>
			<br />
					
		<?php
			$DBConnect = mysqli_connect('localhost','root','', 'projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			
			else {
				$var_dependantno = $_POST['dependantno'];
				$var_firstname = $_POST['firstname'];
				$var_lastname = $_POST['lastname'];
				$var_birthdate = $_POST['birthdate'];
				$var_gender = $_POST['gender'];
				$var_relationship = $_POST['relationship'];
				$var_age = $_POST['age'];
				$var_sssno = $_POST['sssno'];
				
				//Departmemt Query - ready for adding the record
				$SQLQueryDep = "select * from dependant where DependantNo = '$var_dependantno'";

				$resultDep = mysqli_query($DBConnect, $SQLQueryDep);
				$numrowsDep = mysqli_num_rows($resultDep);
				
				if ($numrowsDep > 0) {
					echo '<p align="center"><font size="+2" color="red">Sorry, cannot add this record. The Department ID is already existing.</font></p>';
					echo '<p align="center"><font size="+2"><a href="DepAdd.php">Please enter another one.</a></font></p>';
					echo '<br /><br />';
				}
				if ($numrowsDep == 0) {
					$SQLQueryDepAdd = "INSERT INTO dependant VALUES('$var_dependantno','$var_firstname','$var_lastname','$var_birthdate', '$var_gender', '$var_relationship', '$var_age', '$var_sssno')";
					mysqli_query($DBConnect, $SQLQueryDepAdd);
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