-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Sep 06, 2016 at 03:54 AM
-- Server version: 10.1.13-MariaDB
-- PHP Version: 7.0.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `projectsinc`
--

-- --------------------------------------------------------

--
-- Table structure for table `empproj`
--

CREATE TABLE `empproj` (
  `EmpProjNo` int(1) NOT NULL,
  `NoOfHours` int(2) NOT NULL,
  `SSSNo` varchar(10) NOT NULL,
  `ProjNo` int(2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `empproj`
--

INSERT INTO `empproj` (`EmpProjNo`, `NoOfHours`, `SSSNo`, `ProjNo`) VALUES
(1, 60, '05-65241-8', 11),
(2, 40, '05-00264-1', 10);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `empproj`
--
ALTER TABLE `empproj`
  ADD PRIMARY KEY (`EmpProjNo`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
