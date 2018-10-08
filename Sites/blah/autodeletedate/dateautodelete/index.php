
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>Untitled Document</title>
</head>
<body>
<a href="index.php">Add New</a> | <a href="archives.php">Archives</a>
<form method="post" action="save.php">
  <table width="444" border="0" align="center" cellpadding="0" cellspacing="0">
    <tr>
      <td><div align="right">Description:</div></td>
      <td><label>
        <input name="description" type="text" id="desc" />
      </label></td>
    </tr>
    <tr>
      <td><div align="right">Content:</div></td>
      <td><label>
        <textarea name="content" cols="30" rows="5" id="content"></textarea>
      </label></td>
    </tr>
    <tr>
      <td><div align="right">Number Of Days </div></td>
      <td><input name="numdays" type="text" id="numdays" /></td>
    </tr>
    <tr>
      <td><div align="right"></div></td>
      <td><label>
        <input type="submit" name="Submit" value="Submit" />
      </label></td>
    </tr>
  </table>
</form>
</body>
</html>
