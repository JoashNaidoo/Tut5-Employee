#pragma once
#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
protected:

	string nameOfEmployee;
	float salaryOfEmployee;
	int employeeNumber;

public:
	static int numberOfEmployees;


	~Employee();

	virtual string name() = 0;
	virtual int staffNumber() = 0;
	virtual float salary() = 0;
};

class SalaryEmployee : public Employee {

private:
	float monthSal;

public:

	SalaryEmployee(string, int);
	~SalaryEmployee();


	float setSalary(const float);

	float salary();
	string name();
	int staffNumber();
};

class HourlyEmployee : public Employee {

private:
	float hourlySalary;
	int hoursWorked;

public:

	HourlyEmployee(string, int);
	~HourlyEmployee();


	float setHourlyRate(float);
	int setHoursWorked(int);


	float salary();
	string name();
	int staffNumber();
};

class CommissionEmployee : public Employee{

private:
	float baseSalary;
	float commRate;
	float revGenerated;

public:

	CommissionEmployee(string, int);
	~CommissionEmployee();

	float setBaseSalary(float);
	float setRate(float);
	float setRevenue(float);


	float salary();
	string name();
	int staffNumber();
};

#endif
