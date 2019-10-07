<?php
interface Plumber{
	function unplugDrain();
}
interface Electrician{
	function changeBulb();
}
class Human {
	protected $name;
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function toString(){
		return $this -> name ;
	}
}
class HandyPerson extends Human implements Plumber,Electrician{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function changeBulb(){
		echo " bisa mengganti bohlam ";
	}
	function unplugDrain(){
		echo " bisa menguras ";
	}
	function toString(){
		return $this -> name ;
	}	
}
class IndustrialPlumber extends Human implements Plumber{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function unplugDrain(){
		echo " bisa menguras ";
	}
	function toString(){
		return $this -> name ;
	}
}
class NobodySpecial extends Human
{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function toString(){
		return $this -> name ;
	}
}
?>
