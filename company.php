<?php
interface Payable{
	function getPaymentAmount();
}
class Employee implements Payable{
	private $firstName;
	private $lastName;
	private $socialSecurityNumber;
	
	function __construct($firstName, $lastName, $socialSecurityNumber){
		$this -> firstName = $firstName;
		$this -> lastName = $lastName;
		$this -> socialSecurityNumber = $socialSecurityNumber;
	}
}
class Invoice implements Payable{
	
	private $partNumber;
	private $partDescription;
	private $quantity;
	private $pricePeritem;
	function __construct($partNumber,$partDescription,$quantity,$pricePeritem)
	{
		$this -> partNumber = $partNumber;
		$this -> partDescription = $partDescription;
		$this -> quantity - $quantity;
		$this -> pricePeritem = $pricePeritem; 
	}
}
class CommissionEmployee extends Employee{
	private $grossSales;
	private $commissionRate;
	
	function __construct($grossSales,$commissionRate)
	{
		$this -> grossSales = $grossSales ;
		$this -> commissionRate = $commissionRate ;
	}
}
class HourlyEmployee extends Employee{
	
	private $wage;
	private $hours;
	function __construct($wage,$hours)
	{
		$this -> wage = $wage ;
		$this -> hours = $hours ;
	}
}
class SalariedEmployee extends Employee{
	
	private $weeklySalary;
	function __construct($weeklySalary)
	{
		$this -> weeklySalary = $weeklySalary ;
	}
}
class BasePlusCommissionEmployee extends CommissionEmployee{
	private $BaseSalary;
	
	function __construct($BaseSalary)
	{
		$this -> BaseSalary = $BaseSalary ;
	}
}
?>
