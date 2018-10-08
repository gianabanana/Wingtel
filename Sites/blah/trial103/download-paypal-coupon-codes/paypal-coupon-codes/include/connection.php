<?php
function connection_open() {
    // Database credential
    $servername = "localhost";
    $username = "root";
    $password = "root";
    //Data base name
    $dbname = "coupon";
    try {
        global $conn;
        // Open the connection using PDO.
        $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
        // set the PDO error mode to exception
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    } catch (PDOException $e) {
        // echo $sql . "<br>" . $e->getMessage();
        die();
    }
}
function connection_close() {
    global $conn;
    $conn = null;
}
?>
