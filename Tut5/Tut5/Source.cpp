#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

#include "Header.h"

using namespace std;


int Employee::numberOfEmployees = 0;



Employee::Employee()
{

}

Employee::~Employee(){
	numberOfEmployees--;

}

///////////////////////////////////////////////////////////

SalaryEmployee::SalaryEmployee(string name, int number)
{
	nameOfEmployee = name;

	employeeNumber = number;


	numberOfEmployees++;
	salaryOfEmployee = 0.00;
}

SalaryEmployee::~SalaryEmployee(){
	numberOfEmployees--;
}

float SalaryEmployee::setSalary(const float sal){
	monthSal = sal;
	return monthSal;
}

float SalaryEmployee::salary(){
	return monthSal;
}

string SalaryEmployee::name(){
	return nameOfEmployee;
}

int SalaryEmployee::staffNumber(){
	return employeeNumber;
}

//////////////////////////////////////////////////

HourlyEmployee::HourlyEmployee(string name, int number)
{
	nameOfEmployee = name;
	employeeNumber = number;


	numberOfEmployees++;
	salaryOfEmployee = 0.00;
}

HourlyEmployee::~HourlyEmployee()
{
	numberOfEmployees--;
}

float HourlyEmployee::setHourlyRate(float hourlySal)
{
	hourlySal = hourlySal;
	return hourlySal;
}

int HourlyEmployee::setHoursWorked(int hours)
{
	hoursWorked = hours;
	return hoursWorked;
}

float HourlyEmployee::salary()
{
	salaryOfEmployee = hourlySalary*hoursWorked;
	return salaryOfEmployee;
}

string HourlyEmployee::name()
{
	return nameOfEmployee;
}

int HourlyEmployee::staffNumber()
{
	return employeeNumber;
}

CommissionEmployee::CommissionEmployee(string name, int number)
{
	nameOfEmployee = name;
	employeeNumber = number;


	numberOfEmployees++;
	salaryOfEmployee = 0.00;
}

CommissionEmployee::~CommissionEmployee(){
	numberOfEmployees--;
}

float CommissionEmployee::setBaseSalary(float base)
{
	baseSalary = base;
	return baseSalary;
}

float CommissionEmployee::setRate(float rate)
{
	commRate = rate;
	return commRate;
}

float CommissionEmployee::setRevenue(float reven)
{
	revGenerated = reven;
	return revGenerated;
}

string CommissionEmployee::name()
{
	return nameOfEmployee;
}

int CommissionEmployee::staffNumber()
{
	return employeeNumber;
}
