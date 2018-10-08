<!DOCTYPE html>
<html lang="en">

<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta http-equiv="X-UA-Compatible" content="ie=edge">
<head>
  <title></title>
</head>

<body>

  <?php

  include('session.php');
  //include('phpMailer.php');
  require 'database.php';
  // $a=rand(1000000000, 9999999999);
  // echo "$a";

if(isset($_POST['buy'])){
  // $rnd ="";
  $message ="";
  function rnd($length, $lower=true, $upper=true, $numbers=true){
    $pool ="";
    $result ="";
    if(lower==true){
      $pool .="abcdefghijklmnopqrstuvwxyz";
    }
    if(upper==true){
      $pool .="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    if(numbers==true){
      $pool .="0123456789";
    }
    $a = 0;
    while($a < $length){
      $result .=$pool[rand(0, strlen($pool)-1)];
      $a++;
    }
    return $result;
  }
  $rnd = rnd(10, true, true, true);
  $sample101 = 5;
  //echo $rnd;
  // echo rnd(10, true, true, true);
  // echo $login_session;

// $sql = "INSERT INTO voucher(VoucherCode) VALUES('$rnd')";

$sql = "INSERT INTO voucher(VoucherCode, VoucherValue, useraccounts_email) VALUES(:VoucherCode, :VoucherValue,
  :useraccounts_email)";
$stmt = $conn->prepare($sql);
$stmt->bindParam(':VoucherCode', $rnd);
$stmt->bindParam(':VoucherValue', $sample101);
$stmt->bindParam(':useraccounts_email', $login_session);
$stmt->execute();

// if($stmt->execute()){
//   $message = 'Success!!!!!';
// } else{
//   $message = 'PAKYUUUUUUU!!!!!';
// }
// endif;

// $subject = "Voucher Code";
// $message = "Here is your voucher code: ".$rnd.;
//
// sendEmailMessage($login_session, $subject, $message);
// header("location: success.php");

}
  ?>

  <div class="container">
    <form action="" method="post">
      <p>5 pesos/hour</p>
      <input type="submit" name="buy" value="BUY" class="btn-buy">
  </div>

</body>

</html>
