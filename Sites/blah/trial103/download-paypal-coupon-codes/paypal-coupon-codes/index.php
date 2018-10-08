<?php
include('include/function.php');
include('include/connection.php');
connection_open();
$data = array(
    'p_id' => 1
);
$p_query = Select_Record_By_One_Filter($data, 'product_detail');
$p_query->setFetchMode(PDO::FETCH_ASSOC);
$p_result = $p_query->fetch();
$p_price = $p_result['p_price'];
?>
<html>
    <head>
        <title>Paypal Coupon Codes</title>
        <link rel="stylesheet" type="text/css" href="style.css">
        <script src="jquery.min.js"></script>
    </head>
    <body>
        <div id="main">
            <h1 style="text-align: center;margin-left: 0px;">Paypal Coupon Codes in PHP</h1>
            <?php
            $query = Select_One_Random_Record('coupon_detail');
            $query->setFetchMode(PDO::FETCH_ASSOC);
            $result = $query->fetch()
            ?>
            <div id="message-placeholder"><p class="msg" style="text-align:center;">Use Promotional/Voucher Code <b><?php echo $result['coupon_code']; ?></b> and get <b><?php echo $result['coupon_value']; ?>% </b>Discount. T&amp;C's Apply.</p></div>
            <div id="login">
                <h2><?php echo $p_result['p_name']; ?></h2>
                <hr/> 
                <div class="clear"></div>
                <div id="product_img">
                    <img src="<?php echo $p_result['p_img']; ?>"/>
                </div>
                <div class="content_wrapper">
                    <div class="content">
                        <p id="description"><?php echo $p_result['p_description']; ?></p>
                    </div>

                    <div class="content" style="height:70px;">
                        <div id="get_promo_code">
                            <form action="" method="post" style="margin-bottom: 0px;">
                                <input type="text" id="promocode" placeholder="Enter Promotional/Voucher Code">
                                <input type='button' value="Apply" name="submit" onclick='check_promo_code()'>
                            </form>
                            <span id="wrong_code"></span>
                            <span id="right_code"></span>
                        </div>
                    </div>
                    <div class="content" style="height: 70px;">
                        <div id="amount">
                            <div id="without_promo" >
                                <p>
                                    <b>Total Amount : $<?php echo $p_price; ?></b>
                                </p>
                            </div>
                            <div id="promo_offer">

                                <?php
                                $amount_after_offer = $p_price - ($p_price * $result['coupon_value'] / 100)
                                ?>
                                <p><b>Total Amount : $<?php echo $amount_after_offer; ?></b></p>
                                <del><p>Total Amount : $<?php echo $p_price; ?></p></del>
                            </div>
                        </div>
                        <div id="buynow">
                            <form action="process.php" method="POST">
                                <input type="hidden" value="" id="promo_id" name="promo_id">
                                <input type="hidden" value="1" id="p_id" name="p_id">
                                <div><input type="submit" class="fr" value="Buy Now" name="submit"></div>
                            </form>
                        </div>
                    </div>
                </div>
            </div><img id="paypal_logo" src="secure-paypal-logo.jpg">
        </div>
    </body>
    <script language="javascript" type="text/javascript">
        function check_promo_code() {
            $.ajax({
                url: "check_promocode.php",
                type: "POST",
                data: {code: $("input#promocode").val(), id:<?php echo $result['id']; ?>},
                success: function(data) {
                    if (data == 'FALSE') {
                        $("span#wrong_code").html('Please enter a valid Voucher Code');
                        $("span#right_code").html('');
                        $("div#without_promo").show();
                        $("div#promo_offer").hide();
                    }
                    else {
                        $("span#right_code").html('PromoCode applied Successfully');
                        $("span#wrong_code").html('');
                        $("div#without_promo").hide();
                        $("div#promo_offer").show();
                        $("input#p_id").val('1');
                        $("input#promo_id").val(<?php echo $result['id']; ?>);

                    }
                }
            });
        }
    </script>
</html>
<?php connection_close(); ?>
