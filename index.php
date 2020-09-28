<?php 
echo $_SERVER['REQUEST_URI'];
header( 'Location: ' . $_SERVER['REQUEST_URI']) ; 
 ?>