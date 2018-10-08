<?php

use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require 'PHPMailer/src/Exception.php';
require 'PHPMailer/src/PHPMailer.php';
require 'PHPMailer/src/SMTP.php';

function sendEmailMessage($email, $subject, $message) {
  $mail = new PHPMailer(true);
  try {
      //Server settings
      $mail->SMTPDebug = 2;
      $mail->isSMTP();
      $mail->Host = 'gian23.heliohost.org';
      $mail->SMTPAuth = true;
      $mail->Username = 'gic@gian23.heliohost.org';
      $mail->Password = 'kokonat23';
      $mail->SMTPSecure = "ssl";
      $mail->Port = 465;

      //Recipients
      $mail->setFrom('gic@gian23.heliohost.org', 'GIC');
      $mail->addAddress($email);     // Add a recipient
      $mail->addReplyTo('gianfrancescincosacay@gmail.com', 'GIC');

      //Content
      $mail->Subject = $subject;
      $mail->Body    = $message;

      $mail->send();
  } catch (Exception $e) {

  }
}


 ?>
