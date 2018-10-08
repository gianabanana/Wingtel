<?php
// Include config file
require_once "config.php";

// Define variables and initialize with empty values
$username = $password = $confirm_password = "";
$firstName = $middleName = $lastName = $country = $address = $birthdate =  "";
$contactNo = $citizenship = "";
$valid_idNo = "";
$username_err = $password_err = $confirm_password_err = "";
$firstName_err = $middleName_err = $lastName_err = $country_err = $address_err = $birthdate_err =  "";
$contactNo_err = $citizenship_err  = $valid_idNo_err = "";


// Processing form data when form is submitted
if($_SERVER["REQUEST_METHOD"] == "POST"){

    // Validate username
    if(empty(trim($_POST["username"]))){
        $username_err = "Please enter a username.";
    } else{
        // Prepare a select statement
        $sql = "SELECT idCustomer FROM customer WHERE username = ?";

        if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "s", $param_username);

            // Set parameters
            $param_username = trim($_POST["username"]);

            // Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                /* store result */
                mysqli_stmt_store_result($stmt);

                if(mysqli_stmt_num_rows($stmt) == 1){
                    $username_err = "This username is already taken.";
                } else{
                    $username = trim($_POST["username"]);
                }
            } else{
                echo "Oops! Something went wrong. Please try again later.";
            }
            // Close statement
            mysqli_stmt_close($stmt);
        }
    }

    // Validate password
    if(empty(trim($_POST["password"]))){
        $password_err = "Please enter a password.";
    } elseif(strlen(trim($_POST["password"])) < 6){
        $password_err = "Password must have atleast 6 characters.";
    } else{
        $password = trim($_POST["password"]);
    }

    // Validate confirm password
    if(empty(trim($_POST["confirm_password"]))){
        $confirm_password_err = "Please confirm password.";
    } else{
        $confirm_password = trim($_POST["confirm_password"]);
        if(empty($password_err) && ($password != $confirm_password)){
            $confirm_password_err = "Password did not match.";
        }
    }

  // Validate first name
  $input_firstName = trim($_POST["firstName"]);
  if(empty($input_firstName)){
      $firstName_err = 'Please enter your first name.';
  } else{
      $firstName = $input_firstName;
  }

  // Validate middle name
  $input_middleName = trim($_POST["middleName"]);
  if(empty($input_middleName)){
      $middleName_err = 'Please enter your middle name.';
  } else{
      $middleName = $input_middleName;
  }

  // Validate last name
  $input_lastName = trim($_POST["lastName"]);
  if(empty($input_lastName)){
      $lastName_err = 'Please enter your last name.';
  } else{
      $lastName = $input_lastName;
  }

  // Validate country
  $input_country = trim($_POST["country"]);
  if(empty($input_country)){
      $country_err = 'Please enter your country.';
  } else{
      $country = $input_country;
  }

  // Validate address
  $input_address = trim($_POST["address"]);
  if(empty($input_address)){
      $address_err = 'Please enter an address.';
  } else{
      $address = $input_address;
  }

  // Validate birthdate
  $input_birthdate = trim($_POST["birthdate"]);
  if(empty($input_birthdate)){
      $birthdate_err = 'Please enter your birthdate.';
  } else{
      $birthdate = $input_birthdate;
  }

  // Validate contact number
  $input_contactNo = trim($_POST["contactNo"]);
  if(empty($input_contactNo)){
      $contactNo_err = 'Please enter your contact number.';
  } else{
      $contactNo = $input_contactNo;
  }

  // Validate citizenship
  $input_citizenship = trim($_POST["citizenship"]);
  if(empty($input_citizenship)){
      $citizenship_err = 'Please enter your citizenship.';
  } else{
      $citizenship = $input_citizenship;
  }


  // Validate valid ID number
  $input_valid_idNo = trim($_POST["valid_idNo"]);
  if(empty($input_valid_idNo)){
      $valid_idNo_err = 'Please enter a valid ID number.';
  } else{
      $valid_idNo = $input_valid_idNo;
  }






    // Check input errors before inserting in database
    if(empty($username_err) && empty($password_err) && empty($confirm_password_err) &&
       empty($firstName_err) && empty($middleName_err) && empty($lastName_err) &&
       empty($country_err) && empty($address_err) && empty($birthdate_err) &&
       empty($contactNo_err) && empty($citizenship_err) && empty($valid_idNo_err))
    {

        // Prepare an insert statement
        $sql = "INSERT INTO customer (username, password, firstName, middleName,
                lastName, country, address, birthdate, contactNo, citizenship, valid_idNo)
        VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

        if($stmt = mysqli_prepare($link, $sql)){
            // Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "sssssssssss", $param_username, $param_password,
            $param_firstName, $param_middleName, $param_lastName, $param_country, $param_address,
            $param_birthdate, $param_contactNo, $param_citizenship,$param_valid_idNo);

            // Set parameters
            $param_username = $username;
            $param_password = password_hash($password, PASSWORD_DEFAULT); // Creates a password hash
            $param_firstName = $firstName;
            $param_middleName = $middleName;
            $param_lastName = $lastName;
            $param_country = $country;
            $param_address = $address;
            $param_birthdate = $birthdate;
            $param_contactNo = $contactNo;
            $param_citizenship = $citizenship;
            $param_valid_idNo = $valid_idNo;

            // Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                // Redirect to login page
                header("location: login.php");
            }
              mysqli_stmt_close($stmt);
            }else{
                echo "Something went wrong.";
            }
    }

    // Close connection
    mysqli_close($link);
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <link rel = "icon" href = "iconpic/goshort.png" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="UTF-8">
    <title>Sign Up</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; }
        .wrapper{ width: 350px; padding: 20px; }
    </style>
    <link rel="stylesheet" href="style.css" />
</head>

<body>
  <banner>
		<div id="banner">
		<div id="logo">
			<img src="iconpic/go.png">
		</div>

			<div class="contactnum">
				<p> Call to book at +639368445144/+639152190503 </p>
			</div>

			<div id="inside">
				<ul>
					<li><a href="index.html">HOME</a></li>
          <li><a href="showbranch.php">BRANCHES</a></li>
					<li><span style="font-size:20px;cursor:pointer" onclick="openNav()">&#9776;
							Menu</span></li>
				</ul>
	</div>
</div>
</banner>

<br>
<br>
<br>
<br>
<br>
    <div class="wrapper">
        <h2>Sign Up</h2>
        <p>Please fill this form to create an account.</p>
        <p>Forms with "*" is required field.</p>

        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <div class="form-group <?php echo (!empty($username_err)) ? 'has-error' : ''; ?>">
                <label>*Username</label>
                <input type="text" name="username" class="form-control" value="<?php echo $username; ?>">
                <span class="help-block"><?php echo $username_err; ?></span>
            </div>

            <div class="form-group <?php echo (!empty($password_err)) ? 'has-error' : ''; ?>">
                <label>*Password</label>
                <input type="password" name="password" class="form-control" value="<?php echo $password; ?>">
                <span class="help-block"><?php echo $password_err; ?></span>
            </div>

            <div class="form-group <?php echo (!empty($confirm_password_err)) ? 'has-error' : ''; ?>">
                <label>*Confirm Password</label>
                <input type="password" name="confirm_password" class="form-control" value="<?php echo $confirm_password; ?>">
                <span class="help-block"><?php echo $confirm_password_err; ?></span>
            </div>

            <div class="form-group <?php echo (!empty($firstName_err)) ? 'has-error' : ''; ?>">
                <label>*First Name</label>
                <input type="text" name="firstName" class="form-control" value="<?php echo $firstName; ?>">
                <span class="help-block"><?php echo $firstName_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($middleName_err)) ? 'has-error' : ''; ?>">
                <label>Middle Name</label>
                <input type="text" name="middleName" class="form-control" value="<?php echo $middleName; ?>">
                <span class="help-block"><?php echo $middleName_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($lastName_err)) ? 'has-error' : ''; ?>">
                <label>*Last Name</label>
                <input type="text" name="lastName" class="form-control" value="<?php echo $lastName; ?>">
                <span class="help-block"><?php echo $lastName_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($country_err)) ? 'has-error' : ''; ?>">
                <label>*Country</label>
                <input type="text" name="country" class="form-control" value="<?php echo $country; ?>">
                <span class="help-block"><?php echo $country_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($address_err)) ? 'has-error' : ''; ?>">
                <label>*Address</label>
                <input type="text" name="address" class="form-control" value="<?php echo $address; ?>">
                <span class="help-block"><?php echo $address_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($birthdate_err)) ? 'has-error' : ''; ?>">
                <label>*Birthdate</label>
                <input type="text" name="birthdate" class="form-control" value="<?php echo $birthdate; ?>">
                <span class="help-block"><?php echo $birthdate_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($contactNo_err)) ? 'has-error' : ''; ?>">
                <label>*Contact Number</label>
                <input type="text" name="contactNo" class="form-control" value="<?php echo $contactNo; ?>">
                <span class="help-block"><?php echo $contactNo_err;?></span>
            </div>

            <div class="form-group <?php echo (!empty($citizenship_err)) ? 'has-error' : ''; ?>">
                <label>*Citizenship</label>
                <input type="text" name="citizenship" class="form-control" value="<?php echo $citizenship; ?>">
                <span class="help-block"><?php echo $citizenship_err;?></span>
            </div>


            <div class="form-group <?php echo (!empty($valid_idNo_err)) ? 'has-error' : ''; ?>">
                <label>*Valid ID Number</label>
                <input type="text" name="valid_idNo" class="form-control" value="<?php echo $valid_idNo; ?>">
                <span class="help-block"><?php echo $valid_idNo_err;?></span>
            </div>

            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Submit">
                <input type="reset" class="btn btn-default" value="Reset">
            </div>

            <p>Already have an account? <a href="login.php">Login here</a>.</p>
        </form>

    </div>

</body>

</html>
