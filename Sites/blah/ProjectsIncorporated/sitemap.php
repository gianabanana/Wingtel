<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"><html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
	<title>ProjectsIncorporated</title>
</head>
<link rel="stylesheet" href="style.css" type="text/css">



<body>
	<div id="container">
		<?php
			 include 'header.php';
			 ?>
		<div id="wrapper">
			<div id="content">
				<h2>SITE MAP</h2>
				<p><a href="index.php">Home</a></p>
				<p><a href="maintenance.php">Maintenance</a>
				<ul type="circle">
				
					  <li><a href="DeptAdd.php">Department Add</a>
					  <a href="DeptAddConfirm.php">Department AddConfirm</a></li>
					 <li> <a href="DeptEdit.php">Department Edit</a>
					  <a href="DeptEditTest.php">Department EditTest</a>
					  <a href="DeptEditConfirm.php">Department EditConfirm</a></li>
					 <li> <a href="DeptDelete.php">Department Delete</a>
					 <a href="DeptDeleteConfirm.php">Department DeleteConfirm</a></li>
					<li> <a href="DeptView.php">Department View</a></li>
					 <li><a href="DepAdd.php">Dependant Add</a>
					  <a href="DepAddConfirm.php">Dependant AddConfirm</a></li>
					 <li> <a href="DepEdit.php">Dependant Edit</a>
					  <a href="DepEditTest.php">Dependant EditTest</a>
					  <a href="DepEditConfirm.php">Dependant EditConfirm</a></li>
					<li>  <a href="DepDelete.php">Dependant Delete</a>
					 <a href="DepDeleteConfirm.php">Dependant DeleteConfirm</a></li>
					<li> <a href="DepView.php">Dependant View</a></li>
					 <li><a href="EmpAdd.php">Employee Add</a>
					  <a href="EmpAddConfirm.php">Employee AddConfirm</a></li>
					<li>  <a href="EmpEdit.php">Employee Edit</a>
					  <a href="EmpEditTest.php">Employee EditTest</a>
					  <a href="EmpEditConfirm.php">Employee EditConfirm</a></li>
					<li>  <a href="EmpDelete.php">Employee Delete</a>
					 <a href="EmpDeleteConfirm.php">Employee DeleteConfirm</a></li>
					<li> <a href="EmpView.php">Employee View</a></li>
					  <li><a href="ProjAdd.php">Project Add</a>
					  <a href="ProjAddConfirm.php">Project AddConfirm</a></li>
					 <li> <a href="ProjEdit.php">Project Edit</a>
					  <a href="ProjEditTest.php">Project EditTest</a>
					  <a href="ProjEditConfirm.php">Project EditConfirm</a></li>
					 <li> <a href="ProjDelete.php">Project Delete</a>
					 <a href="ProjDeleteConfirm.php">Project DeleteConfirm</a></li>
					<li> <a href="ProjView.php">Project View</a></li>
					 <li><a href="EmpProjAdd.php">Employee Project Add</a>
					  <a href="EmpProjAddConfirm.php">Employee Project AddConfirm</a></li>
					<li>  <a href="EmpProjEdit.php">Employee Project Edit</a>
					  <a href="EmpProjEditTest.php">Employee Project EditTest</a>
					  <a href="EmpProjEditConfirm.php">EmployeeProject EditConfirm</a></li>
					<li>  <a href="EmpProjDelete.php">EmployeeProject Delete</a>
					 <a href="EmpProjDeleteConfirm.php">Employee Project DeleteConfirm</a></li>
				<li>	 <a href="EmpProjView.php">Employee Project View</a></li>
					  
					  
				
				</ul>
				
					  </p>
				<p><a href="contactus.php">Contact Us</a></p>
			</div>
		</div>
		<div id="navigation">
			<h2>Navigation Links</h2>
			<ul>
				<li><a href="index.php">Home</a></li>
				<li><a href="Maintenance.php ">Maintenance</a></li>
				<li><a href="">About us</a></li>
				<li><a href="contactus.php">Contact us</a></li>
				<li><a href="Sitemap.php">Sitemap</a></li>
				
			</ul>
		</div>
		<div id="extra">
			<h2>Extra Stuff Goes Here</h2>
			<p>Sometimes this would be called a <em>sidebar</em>, but it doesn't always have to be on the side to be called a <em>sidebar</em>. Sidebars can be on tops of things, below things, but they are usually beside things &ndash; hence it being a called a sidebar.</p>
			<p><small>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</small></p>
			
		</div>
		<div id="footer">
			<ul>
				<li><a href="index.php">Home</a></li>
				<li><a href="Maintenance.php">Maintenance</a></li>
				<li><a href="">About us</a></li>
				<li><a href="contactus.php">Contact us</a></li>
				<li><a href="sitemap.php">Sitemap</a></li>
			</ul>
			<p>COPYRIGHT 2016. Siong, Joshua Louis C.</p>
		</div>
	</div>
	
</body>
</html>
<?php
	session_start();
	session_destroy();
?>

