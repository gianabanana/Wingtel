<?php
include('session.php');
// Initialize variables to null.
$Error ="";
$successMessage ="";
if (isset($_POST['submit'])){
  if ( !($_POST['newpassword'] == "" && $_POST['cnewpassword'] == "" )){
	//Fetching Values from URL
	$newpassword=$_POST['newpassword'];
	$cnewpassword=$_POST['cnewpassword'];
	
	if( $newpassword == $cnewpassword ){
		$password= sha1($cnewpassword); 	
		
		// Establishing connection with server..
		$connection = mysql_connect("localhost", "root", "");
	 
		// Selecting Database
		$db = mysql_select_db("college", $connection);
		$query = mysql_query("UPDATE registration SET password='$password' WHERE password='$login_password'");
			if($query){
			$successMessage ="Password Changed Successfully.";
			}
	}
	else{
		$Error ="Password not match...!!!!";
	}
  }
  else{
	$Error ="Password should not be empty....!!!!";
  }
}
?>