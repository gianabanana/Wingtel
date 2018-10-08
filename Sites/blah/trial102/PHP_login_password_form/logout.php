<?php
session_start();
if(session_destroy()) //Destroying all sessions
{
header("Location: password_login.php"); //Redirecting to home page
}
?>