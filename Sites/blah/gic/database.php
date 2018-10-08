<?php
$server = 'localhost';
$username = 'gian23';
$password = 'kokonat23';
$database = 'gian23_gic';

try{
	$conn = new PDO("mysql:host=$server;dbname=$database;", $username, $password);
} catch(PDOException $e){
	die( "Connection failed: " . $e->getMessage());
}
