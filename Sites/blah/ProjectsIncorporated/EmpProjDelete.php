
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
		<h1><p align="center"><strong>DELETE A EMPLOYEE PROJECT RECORD</strong></p></h1>
		<form id="deptdelete" name="deptdelete" action="DeptDeleteConfirm.php" method="POST">
			<table align="center">		
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from empproj";
				$result = mysqli_query($DBConnect, $SQLQuery);
		?>
				<tr>
					<td>Choose an Employee Project: </td>
					<td><select name="empprojno" id="projno">
		<?php
				while ($deptobject = mysqli_fetch_object($result)) {
					echo '<option value="'.$deptobject->emppprojno.'">'.$deptobject->EmpProjNo.'</option>';
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