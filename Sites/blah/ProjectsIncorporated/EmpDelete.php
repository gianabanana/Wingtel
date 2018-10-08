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
    <title></title>
  </head>
  <body>
  <div id="container">
	<?php
			include 'header.php';
		?>
		<br /><br />
		<h1><p align="center"><strong>DELETE AN EMPLOYEE RECORD</strong></p></h1>
		<form id="deptdelete" name="deptdelete" action="EmpDeleteConfirm.php" method="POST">
			<table align="center">		
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from employee";
				$result = mysqli_query($DBConnect, $SQLQuery);
		?>
				<tr>
					<td>Choose an Employee: </td>
					<td><select name="sssno" id="sssno">
		<?php
				while ($deptobject = mysqli_fetch_object($result)) {
					echo '<option value="'.$deptobject->SSSNo.'">'.$deptobject->FirstName.'</option>';
				}
		?>
						</select>
					</td>
		<?php
			}
			mysqli_close($DBConnect);
		?>
				<td><input type="submit" name="submit" value="Delete this record."/></td>
			</table>
		</form>
		<br /><br />
		<p align="center"><a href="maintenance.php">Back to Maintenance Module</a></p>
		<br /><br />
		<?php
			include 'footer.php';
		?>
</div>

  </body>
</html>