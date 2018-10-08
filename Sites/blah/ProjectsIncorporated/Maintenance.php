<?php
	 session_start();
	 if ($_SESSION['login'] != '1') {
	 	session_destroy();
	 	header("Location:login.php");
	 } 
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"><html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
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
		<div id="wrapper">
			<div id="content">
				<h2>Maintenance Pages</h2>
				<table border=1 cellpadding="5">
					   <tr>
					   	   <td><b>Department</b></td>
						   <td><a href ="DeptAdd.php">Add</a></td>
						   <td><a href="DeptEdit.php">Edit</a></td>
						   <td><a href="DeptDelete.php">Delete</a></td>
						   <td><a href ="DeptView.php">View</a></td>
					   </tr>
					   <tr>
					   	   <td><b>Employee</b></td>
						   <td><a href="EmpAdd.php">Add</a></td>
						   <td><a href="EmpEdit.php">Edit</a></td>
						   <td><a href="EmpDelete.php">Delete</a></td>
						   <td><a href ="EmpView.php">View</a></td>
					   </tr>
					   <tr>
					   	   <td><b>Dependant</b></td>
						  
						   <td><a href="DepAdd.php">Add</a></td>
						   <td><a href="depedit.php">Edit</a></td>
						   <td><a href="DepDelete.php">Delete</a></td>
						   <td><a href ="DependantView.php">View</a></td>
					   </tr>
					   <tr>
					   	   <td><b>Project</b></td>
						    <td><a href="ProjAdd.php">Add</a></td>
						   <td><a href="ProjEdit.php">Edit</a></td>
						   <td><a href="ProjDelete.php">Delete</a></td>
						   <td><a href ="ProjView.php">View</a></td>
					   </tr>
					   <tr>
					   	   <td><b>Employee Project</b></td>
						    <td><a href="EmpProjAdd.php">Add</a></td>
						   <td><a href="EmpProjEdit.php">Edit</a></td>
						   <td><a href="EmpProjDelete.php">Delete</a></td>
						   <td><a href ="EmpProjView.php">View</a></td>
					   </tr>
				</table>
				<br><br>
			</div>
		</div>
		<?php
			 include 'footer.php';
		?>
	</div>
</body>
</html>
