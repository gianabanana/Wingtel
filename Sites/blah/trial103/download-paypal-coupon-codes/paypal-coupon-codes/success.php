<?php
include('include/function.php');
include('include/connection.php');
echo connection_open();
?>
<html>
    <head>
        <title>Paypal Coupon Codes</title>
        <link rel="stylesheet" type="text/css" href="style.css">
    </head>
    <body>
        <?php
        if (!empty($_REQUEST)) {
            $product_no = $_REQUEST['item_number']; // Product ID
            $product_transaction = $_REQUEST['tx']; // Paypal transaction ID
            $product_price = $_REQUEST['amt']; // Paypal received amount value
            $product_currency = $_REQUEST['cc']; // Paypal received currency type
            $product_status = $_REQUEST['st']; // Paypal product status
            $description = explode('#', $product_no);
            if ($description[0] != '') {
                if ($description[1] != '') {
                    $data = array(
                        'p_id' => $description[0]
                    );
                    $p_query = Select_Record_By_One_Filter($data, 'product_detail');
                    $p_query->setFetchMode(PDO::FETCH_ASSOC);
                    $p_result = $p_query->fetch();
                    $p_price = $p_result['p_price'];

                    $data = array(
                        'id' => $description[1]
                    );
                    $promo_query = Select_Record_By_One_Filter($data, 'coupon_detail');
                    $promo_query->setFetchMode(PDO::FETCH_ASSOC);
                    $promo_result = $promo_query->fetch();
                    $product_actual_price = $p_price - ($p_price * $promo_result['coupon_value'] / 100);
                } else {
                    $data = array(
                        'p_id' => $description[0]
                    );
                    $p_query = Select_Record_By_One_Filter($data, 'product_detail');
                    $p_query->setFetchMode(PDO::FETCH_ASSOC);
                    $p_result = $p_query->fetch();
                    $product_actual_price = $p_result['p_price'];
                }
            }
            echo connection_close();
        }
        ?>
        <div id="main">
            <h1>Paypal Coupon Codes in PHP</h1>

            <div id="return">
                <h2>Payment Status </h2>
                <hr/>

                <?php
                //Rechecking the product price and currency details
                if ($product_price ==$product_actual_price && $product_currency == $p_result['product_currency']) {
                    echo "<h3 id='success'>Payment Successful</h3>";
                    echo "<P>Transaction Status - " . $product_status . "</P>";
                    echo "<P>Transaction Id - " . $product_transaction . "</P>";
                    echo "<div class='back_btn'><a  href='index.php' id= 'btn'><< Back to Products</a></div>";
                } else {
                    echo "<h3 id='fail'>Payment Failed</h3>";
                    echo "<P>Transaction Status - Unompleted</P>";
                    echo "<P>Transaction Id - " . $product_transaction . "</P>";
                    echo "<div class='back_btn'><a  href='index.php' id= 'btn'><< Back to Products</a></div>";
                }
                ?>
            </div>

            <!-- Right side div -->
            <div class="fr"id="formget">
                <a href=http://www.formget.com/app><img src="formget.jpg" alt="Online Form Builder"/></a>
            </div>
        </div>
    </body>
</html>

