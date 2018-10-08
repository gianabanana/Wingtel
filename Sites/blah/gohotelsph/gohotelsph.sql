-- phpMyAdmin SQL Dump
-- version 4.7.9
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Oct 01, 2018 at 11:07 AM
-- Server version: 5.7.21
-- PHP Version: 7.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `gohotelsph`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

DROP TABLE IF EXISTS `admin`;
CREATE TABLE IF NOT EXISTS `admin` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(50) NOT NULL,
  `password` varchar(255) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=MyISAM AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`id`, `username`, `password`) VALUES
(1, 'carlos', 'carlos');

-- --------------------------------------------------------

--
-- Table structure for table `booking`
--

DROP TABLE IF EXISTS `booking`;
CREATE TABLE IF NOT EXISTS `booking` (
  `idBooking` int(11) NOT NULL AUTO_INCREMENT,
  `bookingNum` int(11) DEFAULT NULL,
  `checkin_date` date DEFAULT NULL,
  `checkout_date` date DEFAULT NULL,
  `no_of_nights` int(11) DEFAULT NULL,
  `bookingPrice` double NOT NULL,
  `status` varchar(45) DEFAULT NULL,
  `idCustomer` int(11) DEFAULT NULL,
  `idRoom` int(11) DEFAULT NULL,
  PRIMARY KEY (`idBooking`),
  KEY `idCustomer` (`idCustomer`),
  KEY `idRoom` (`idRoom`)
) ENGINE=MyISAM AUTO_INCREMENT=47 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `booking`
--

INSERT INTO `booking` (`idBooking`, `bookingNum`, `checkin_date`, `checkout_date`, `no_of_nights`, `bookingPrice`, `status`, `idCustomer`, `idRoom`) VALUES
(43, 7809, '2018-10-10', '2018-10-13', 3, 6900, 'Confirmed', 11, 3),
(45, 8710, '2018-10-09', '2018-10-10', 1, 2000, 'Not confirmed', 4, 5),
(46, 3612, '2018-10-12', '2018-10-13', 1, 800, 'Not confirmed', 4, 6);

-- --------------------------------------------------------

--
-- Table structure for table `branch`
--

DROP TABLE IF EXISTS `branch`;
CREATE TABLE IF NOT EXISTS `branch` (
  `idBranch` int(11) NOT NULL AUTO_INCREMENT,
  `branchName` varchar(45) DEFAULT NULL,
  `address` varchar(200) DEFAULT NULL,
  `description` varchar(500) DEFAULT NULL,
  PRIMARY KEY (`idBranch`)
) ENGINE=MyISAM AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `branch`
--

INSERT INTO `branch` (`idBranch`, `branchName`, `address`, `description`) VALUES
(1, 'Bacolod', 'Lacson St, Bacolod, 6100 Negros Occidental', 'Bacolod City is known as THE CITY OF SMILES and Go Hotels Bacolod wants to keep the smile coming with its incomparable service and budget friendly accommodation.'),
(2, 'Butuan', 'J.C Aquino Ave., Barangay Bayanihan, Butuan City, 8600 Agusan Del Norte', 'The first branch in Mindanao, Go Hotels Butuan is overall the ninth branch for the value hotel chain. The hotel is 20 minutes away from Butuan\'s Bancasi Airport.'),
(3, 'Cubao-Quezon City', '840 Aurora Boulevard, Cubao Quezon City', 'Go Hotels Cubao is conveniently located along Aurora Boulevard, Quezon City near shopping centers, light rail and metro rail stations, provincial bus and jeepney terminals to places of interest like Smart Araneta Coliseum.'),
(4, 'Dumaguete', 'Central Business District, Calindagan Rd, Dgte.,6200 Neg. Or.', '\"Dumaguete\" was coined from the Visayan word DAGGIT which means to snatch.'),
(5, 'Ermita-Manila', '1412 A. Mabini Street, Manila City', 'Go Hotels Ermita-Manila is located along Mabini Street. The hotel location is advantageous to both domestic and international travellers, either travelling for business or leisure.');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

DROP TABLE IF EXISTS `customer`;
CREATE TABLE IF NOT EXISTS `customer` (
  `idCustomer` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(50) NOT NULL,
  `password` varchar(100) NOT NULL,
  `firstName` varchar(45) NOT NULL,
  `middleName` varchar(45) DEFAULT NULL,
  `lastName` varchar(45) NOT NULL,
  `country` varchar(45) NOT NULL,
  `address` varchar(200) NOT NULL,
  `birthdate` date NOT NULL,
  `contactNo` varchar(30) NOT NULL,
  `citizenship` varchar(45) NOT NULL,
  `valid_idNo` varchar(45) NOT NULL,
  PRIMARY KEY (`idCustomer`),
  UNIQUE KEY `username` (`username`)
) ENGINE=MyISAM AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`idCustomer`, `username`, `password`, `firstName`, `middleName`, `lastName`, `country`, `address`, `birthdate`, `contactNo`, `citizenship`, `valid_idNo`) VALUES
(3, 'edrian', '$2y$10$GvPsVXTIy8JQwGoBofI1UuMweth6HDxQXMujd2ffhAs5eT380R1r2', 'edrian', 'pabebe', 'razonable', 'philippines', 'guihulngan city', '1996-05-05', '09123456781', 'indian', '13-1-00124'),
(5, 'austin', '$2y$10$h2NrcxlzZ12ma0bGnDEAYuPTD2pGpcN3ejgY1nlvjko9VVZ/qk6ny', 'john austin', 'rosalada', 'dalde', 'philippines', 'dipolog city', '1997-08-27', '09338149882', 'filipino', '14-1-00100'),
(4, 'stephalene14', '$2y$10$BrBnEq44k1AckbOvn.cYNerLaRazu1aUCVrg0tt/6UJV3JxFIDZ6a', 'stephalene', 'ciano', 'tan', 'phili', 'philippines', '1996-11-03', '09268445144', 'filipino', '13-1-00750'),
(6, 'vince', '$2y$10$A2F7xWIJLLoCityiPOelPuCyxKKB8hB.BtTa2j6yKV60bw5eQ2Z/i', 'vince', 'ciano', 'tan', 'philippines', 'guihulngan city', '2000-05-02', '09162190503', 'filipino', '13-1-00760'),
(7, 'alex', '$2y$10$qhRc2rEOlcWpN/JFyo0Zy.KZ1TmWwiZITkNnK6Awzo5pfMJmqK6Qu', 'Alexander', 'ciano', 'tan', 'philippines', 'guihulngan city', '1998-08-15', '09123456781', 'filipino', '13-1-00761'),
(8, 'arlene', '$2y$10$TZnFpSpzoecaeC4sqqOASO0FauV87sWb0Cb2wsEgnsfNXABqP.YpC', 'arlene', 'ciano', 'tan', 'philippines', 'guihulngan city', '1995-10-19', '09162190503', 'filipino', '13-1-00764'),
(9, 'angelo', '$2y$10$a/sh/lF5PlClBcyrL2plNO/1mZB0F4tdbwCpFomotcYD3Zv3JFcZq', 'angelo', 'ciano', 'tan', 'philippines', 'guihulngan city', '2002-08-21', '09162190503', 'filipino', '123123'),
(10, 'dalde', '$2y$10$h8UKxWkYgEvTNUfHeMfHW.QoFCk1wCyqdEdIE7jluU8oN1Vp8M9kW', 'jard', 'dalde', 'dalde', 'Philippines', 'dipolog city', '1997-08-27', '9151101394', 'Filipino', '14-1-00100'),
(11, 'christen', '$2y$10$ws3p0o7xzsnSTx1/0ac2kOrHYz1tcS7uPzCmaStWiAeUoPaM94T8C', 'christen', 'rosolada', 'calibo', 'Philippines', 'dumaguete city', '1998-04-02', '9151101394', 'Filipino', '123123123123'),
(12, 'japh', '$2y$10$SVlwnOB7hCxDV9lkQC.4TuaR8LQG2UBvTZuDQN6z.H2lSpYHfhEae', 'jap', 'bol', 'euma', 'japan', 'kyoto', '1969-01-20', '091239019', 'japanese korean', '141-123-213');

-- --------------------------------------------------------

--
-- Table structure for table `payment`
--

DROP TABLE IF EXISTS `payment`;
CREATE TABLE IF NOT EXISTS `payment` (
  `idPayment` int(11) NOT NULL AUTO_INCREMENT,
  `total_purchase_amount` double DEFAULT NULL,
  `idBooking` int(11) DEFAULT NULL,
  PRIMARY KEY (`idPayment`),
  KEY `idBooking` (`idBooking`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `room`
--

DROP TABLE IF EXISTS `room`;
CREATE TABLE IF NOT EXISTS `room` (
  `idRoom` int(11) NOT NULL AUTO_INCREMENT,
  `roomNo` int(11) DEFAULT NULL,
  `roomType` varchar(45) DEFAULT NULL,
  `no_of_pax` int(11) DEFAULT NULL,
  `price` double DEFAULT NULL,
  `details` varchar(200) DEFAULT NULL,
  `availability` varchar(45) DEFAULT NULL,
  `idBranch` int(11) DEFAULT NULL,
  PRIMARY KEY (`idRoom`),
  KEY `idBranch` (`idBranch`)
) ENGINE=MyISAM AUTO_INCREMENT=12 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `room`
--

INSERT INTO `room` (`idRoom`, `roomNo`, `roomType`, `no_of_pax`, `price`, `details`, `availability`, `idBranch`) VALUES
(2, 101, 'Guest', 2, 1100, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'reserved', 1),
(3, 102, 'Deluxe', 4, 2300, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'reserved', 1),
(4, 103, 'Superior Room', 4, 3000, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'reserved', 1),
(5, 104, 'Queens Bedroom', 3, 2000, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'reserved', 1),
(6, 105, 'Single', 1, 800, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'reserved', 1),
(7, 106, 'Twins Bedroom', 2, 1400, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'vacant', 1),
(8, 107, 'Twins Bedroom', 2, 1400, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'vacant', 1),
(9, 108, 'King\'s Bedroom', 3, 2200, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'vacant', 1),
(10, 109, 'Single', 1, 800, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'vacant', 1),
(11, 110, 'Superior', 4, 3000, 'Aircon, Cable TV, Internet Access, Bath towel, Single use soap and shampoo, Hot and cold shower', 'vacant', 1);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
