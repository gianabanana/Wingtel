<?php
session_start();//starting session

// Initialize variables to null.
$Error ="";
$successMessage ="";
if (isset($_POST['submit'])){
  if ( !( $_POST['email'] == "" && $_POST['password'] == "" ) ){
	//Fetching Values from URL
	$email=$_POST['email'];
	$password= sha1($_POST['password']); // Password Encryption, If you like you can also leave sha1
	 
	// check if e-mail address syntax is valid or not
	$email = filter_var($email, FILTER_SANITIZE_EMAIL); // sanitizing email(Remove unexpected symbol like <,>,?,#,!, etc.)
	 
	if (filter_var($email, FILTER_VALIDATE_EMAIL)){	
		// Establishing connection with server..
		$connection = mysql_connect("localhost", "root", "");
 
		// Selecting Database
		$db = mysql_select_db("college", $connection);
		//matching user input email and password with stored email and password in database
		$result = mysql_query("SELECT * FROM registration WHERE email='$email' AND password='$password'");
		$data = mysql_num_rows($result);
		 
		if($data==1){
			$_SESSION['login_user']=$email;//Initializing Session
			header('Location: profile.php');				
		}
		else{
			$Error ="Email or Password is wrong...!!!!";
		}
		//connection closed
		mysql_close ($connection);
	}
	else{
		$Error ="Invalid Email Format....!!!!";
	} 
  }
  else{
	$Error ="Email or Password is Empty...!!!!";
  }
}
?>