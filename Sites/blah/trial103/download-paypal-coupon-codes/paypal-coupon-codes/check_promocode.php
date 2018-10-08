<?php
include('include/function.php');
include('include/connection.php');
connection_open();
$code=$_POST['code'];
$id=$_POST['id'];
$data = array(
    'coupon_code' => $code,
    'id' =>$id
);
$query = Select_Record_By_Two_Filter($data, 'coupon_detail');
$query->setFetchMode(PDO::FETCH_ASSOC);

$result = $query->fetch();

if ($result!='') {
    echo $result['coupon_value'];
} else {
    echo 'FALSE';
}
connection_close();
?>
