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
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
	<title>Projects Incorporated</title>
	
	<link rel = "stylesheet" href = "style.css" type = "text/css">
</head>
<body>
	   	<?php
			 include "header.php";
		?>
		<br /><br />
		<h1><p align="center"><strong>LIST OF ALL PROJECT RECORDS</strong></p></h1>
						
		<?php
			$DBConnect = mysqli_connect('localhost','root','','projectsinc');
			if (!$DBConnect) {
				die(mysqli_error());
			}
			else {
				$SQLQuery = "select * from project ";
				$result = mysqli_query($DBConnect, $SQLQuery);
				$numrows = mysqli_num_rows($result);
								
				if ($numrows > 0) {
		?>
			<table border="1" cellpadding="5" align="center">
				<tr>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>Project No.</font></strong></td>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>Project Name</font></strong></td>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>City</font></strong></td>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>Zip Code</font></strong></td>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>SSS No.</font></strong></td>
					<td bgcolor="lightgrey" align="center"><strong><font size='+1'>Dept No.</font></strong></td>
				</tr>
		<?php
					while ($row = mysqli_fetch_assoc($result)) {
						echo "<tr>";
						foreach ($row as $field_name => $field_value) {
							echo "<td><font size='+1'>$field_value</font></td>";
						}
						echo "</tr>";
					}
				} //end of if ($numrows > 0)
				else {
					echo '<font size="+2" color="red">SORRY, there are no Project records to display.</font>';
				}
			}
			mysqli_close($DBConnect);
		?>
				
			</table>		
			
		<br /><br />
		<p align="center"><a href="maintenance.php">Back to Maintenance Module</a></p>
		<br /><br />
		<?php
			 include 'footer.php';
		?>
</body>
</html>