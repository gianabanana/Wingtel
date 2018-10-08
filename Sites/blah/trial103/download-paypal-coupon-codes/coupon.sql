-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 01, 2015 at 12:24 PM
-- Server version: 5.6.17
-- PHP Version: 5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `coupon`
--

-- --------------------------------------------------------

--
-- Table structure for table `coupon_detail`
--

CREATE TABLE IF NOT EXISTS `coupon_detail` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `coupon_code` varchar(255) NOT NULL,
  `coupon_value` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `coupon_detail`
--

INSERT INTO `coupon_detail` (`id`, `coupon_code`, `coupon_value`) VALUES
(1, 'GET10', 10),
(2, 'GET20', 20),
(3, 'GET30', 30),
(4, 'GET40', 40);

-- --------------------------------------------------------

--
-- Table structure for table `product_detail`
--

CREATE TABLE IF NOT EXISTS `product_detail` (
  `p_id` int(10) NOT NULL AUTO_INCREMENT,
  `p_name` varchar(255) NOT NULL,
  `p_description` text NOT NULL,
  `p_price` varchar(255) NOT NULL,
  `product_currency` varchar(255) NOT NULL,
  `p_img` varchar(255) NOT NULL,
  PRIMARY KEY (`p_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `product_detail`
--

INSERT INTO `product_detail` (`p_id`, `p_name`, `p_description`, `p_price`, `product_currency`, `p_img`) VALUES
(1, 'Dell Inspiron 3542 15.6-inch Laptop', 'Dell Inspiron 3542 15.6-inch Laptop (Core i3 4005U/4GB/500GB/Ubuntu/Integrated Graphics/without Laptop Bag), Silver', '150', 'USD', '1.jpg');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
