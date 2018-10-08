<?php
require 'PHPMailer/PHPMailerAutoload.php';

$mail = new PHPMailer;

$mail->isSMTP();                                   // Set mailer to use SMTP
$mail->Host = 'smtp.gmail.com';                    // Specify main and backup SMTP servers
$mail->SMTPAuth = true;                            // Enable SMTP authentication
$mail->Username = 'gianfrancescincosacay@gmail.com';          // SMTP username
$mail->Password = 'trial'; // SMTP password
$mail->SMTPSecure = 'ssl';                         // Enable TLS encryption, `ssl` also accepted
$mail->Port = 465;                                 // TCP port to connect to

$mail->setFrom('gianfrancescincosacay@gmail.com', 'CodexWorld');
$mail->addReplyTo('gianfrancescincosacay@gmail.com', 'CodexWorld');
$mail->addAddress('giancsacay@su.edu.ph');   // Add a recipient
//$mail->addCC('cc@example.com');
//$mail->addBCC('bcc@example.com');

$mail->isHTML(true);  // Set email format to HTML

$mail->Subject = 'Test Email';
$mail->Body    = 'This is our body...';

if($mail->send()) {
  echo 'Message has been sent';
} else {
  echo 'Message could not be sent.';
  echo 'Mailer Error: ' . $mail->ErrorInfo;
}
?>
