<?php
//It accepts the GET request and writes the pin number in status.txt
$pin = $_GET['pin'];
$file = fopen('status.txt', 'w');
//if($file == false)
//{
//echo 'error o';
//}
//else
//{
//echo 'ok o';
//}
fwrite($file,$pin);
//if(fwrite($file,$pin)==false)
//{
//echo 'error w';
//}
//else
//{
//echo 'ok w';
//}
fclose($file);

?>
