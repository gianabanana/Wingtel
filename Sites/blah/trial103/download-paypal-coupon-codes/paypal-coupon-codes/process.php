<?php
include('include/function.php');
include('include/connection.php');
if (isset($_POST['submit'])) {
    connection_open();
    if (isset($_POST['p_id'])) {
        if (isset($_POST['promo_id'])) {
            $data = array(
                'p_id' => $_POST['p_id']
            );
            $p_query = Select_Record_By_One_Filter($data, 'product_detail');
            $p_query->setFetchMode(PDO::FETCH_ASSOC);
            $p_result = $p_query->fetch();
            $p_price = $p_result['p_price'];

            $data = array(
                'id' => $_POST['promo_id']
            );
            $promo_query = Select_Record_By_One_Filter($data, 'coupon_detail');
            $promo_query->setFetchMode(PDO::FETCH_ASSOC);
            $promo_result = $promo_query->fetch();
            $product_price = $p_price - ($p_price * $promo_result['coupon_value'] / 100);
        } else {
            $data = array(
                'p_id' => $_POST['p_id']
            );
            $p_query = Select_Record_By_One_Filter($data, 'product_detail');
            $p_query->setFetchMode(PDO::FETCH_ASSOC);
            $p_result = $p_query->fetch();
            $product_price = $p_result['p_price'];
        }
        $product_name = $p_result['p_name'];
        $product_currency = $p_result['product_currency'];
        $product_id = $_POST['p_id'] . '#' . $_POST['promo_id'];
        //Here we can use paypal url or sanbox url.
        $paypal_url = 'https://www.sandbox.paypal.com/cgi-bin/webscr';
        //Here we can used seller email id. 
        $merchant_email = '';
        //here we can put cancle url when payment is not completed.
        $cancel_return = "http://localhost/paypal-coupon-codes/index.php";
        //here we can put cancle url when payment is Successful.
        $success_return = "http://localhost/paypal-coupon-codes/success.php";

        echo connection_close();
        ?>
        <div style="margin-left: 38%"><img src="ajax-loader.gif"/><img src="processing_animation.gif"/></div>
        <form name="myform" action="<?php echo $paypal_url; ?>" method="post" target="_top">
            <input type="hidden" name="cmd" value="_xclick">
            <input type="hidden" name="cancel_return" value="<?php echo $cancel_return ?>">
            <input type="hidden" name="return" value="<?php echo $success_return; ?>">
            <input type="hidden" name="business" value="<?php echo $merchant_email; ?>">
            <input type="hidden" name="lc" value="C2">
            <input type="hidden" name="item_name" value="<?php echo $product_name; ?>">
            <input type="hidden" name="item_number" value="<?php echo $product_id; ?>">
            <input type="hidden" name="amount" value="<?php echo $product_price; ?>">
            <input type="hidden" name="currency_code" value="<?php echo $product_currency; ?>">
            <input type="hidden" name="button_subtype" value="services">
            <input type="hidden" name="no_note" value="0">
        </form>
        <script type="text/javascript">
            document.myform.submit();
        </script><?php
    }
}
?>

