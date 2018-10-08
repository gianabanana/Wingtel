<?php
// Initialize variables to null.
$name =""; //Sender Name
$email =""; //Sender's email ID
$nameError ="";
$emailError ="";
$successMessage ="";
$passwordMessage ="";
 
//On submitting form below function will execute
 
if(isset($_POST['submit']))
 {
	// checking null values in message
	if (!($_POST["name"]== "")){
		$name = $_POST["name"];
		
		// check name only contains letters and whitespace
		if (preg_match("/^[a-zA-Z ]*$/",$name)){
			if (!($_POST["email"]=="")) {
				$email =$_POST["email"];//calling function to remove special characters from email
				// check if e-mail address syntax is valid or not
				$email = filter_var($email, FILTER_SANITIZE_EMAIL); // sanitizing email(Remove unexpected symbol like <,>,?,#,!, etc.)
				if (filter_var($email, FILTER_VALIDATE_EMAIL)){	
				  
				  // generating password
				  $chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*_";
				  $password = substr( str_shuffle( $chars ), 0, 8 );
				  $password1= sha1($password);//Encrypting Password
				 	
				  // Establishing connection with server..
				  $connection = mysql_connect("localhost", "root", "");
	 
				  // Selecting Database
				  $db = mysql_select_db("college", $connection);
				  $result = mysql_query("SELECT * FROM registration WHERE email='$email'");
				  $data = mysql_num_rows($result);
	 
				  if(($data)==0){
					//Insert query
					$query = mysql_query("insert into registration(name, email, password) values ('$name', '$email', '$password1')");
					if($query){
						$to = $email;
						$subject = 'Your registration is completed';
										
						/* Let's prepare the message for the e-mail */
						$message = 'Hello'.$name.'
						Your email and password is following: 

						E-mail: '.$email.'
						Your new password : '.$password.'
						
						Now you can login with this email and password.';
							 
						/* Send the message using mail() function */
							if(mail($to, $subject, $message ))
							{
								$successMessage = "Password has been sent to your mail, Please check your mail and SignIn.";
							}
					}
				  }
				  else{
					$emailError =  "This email is already registered, Please try another email...";
				  }
				}
				else{ 
					$emailError = "Invalid Email"; }
				}
			else{
				$emailError = "Email is required";
			}	
		}
		else{
			$nameError = "Only letters and white space allowed";	
		}
	}
	else {
		$nameError = "Name is required";
	}	
}

?>