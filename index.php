<?php 
// echo $_SERVER['REQUEST_URI'];

$url = $_SERVER['REQUEST_URI'] == '/' ? './index.html' : '.' . $_SERVER['REQUEST_URI'];
// echo $url;
// header( 'Location: ' . $url) ; 
$html = require($url);
echo $html;
 ?>