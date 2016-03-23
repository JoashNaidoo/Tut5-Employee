#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

#include "Header.h"

using namespace std;

int main()
{
	float totalSalary;


	SalaryEmployee *sal = new SalaryEmployee("Person 1", 58987);
	HourlyEmployee *hour = new HourlyEmployee("Person 2", 98745);
	CommissionEmployee *com = new CommissionEmployee("Person3", 23587);

	cout << "Month" << sal->name() << "Staff Nmber : " << sal->staffNumber() << endl;
	cout << "Hourly" << hour->name() << "Staff Nmber : " << hour->staffNumber() << endl;
	cout << "Commission" << com->name() << "Staff Nmber : " << com->staffNumber() << endl;

	cout << "Number of Employees is " << Employee::numberOfEmployees << endl;



	Employee *empPtr[3];


	sal->setSalary(1500.99);


	hour->setHourlyRate(369.44);
	hour->setHoursWorked(32);

	com->setBaseSalary(8980.50);
	com->setRate(0.32);
	com->setRevenue(1544.10);


	empPtr[0] = sal;
	empPtr[1] = hour;
	empPtr[2] = com;


	cout << endl;
	cout << sal->name() << " monthly salary is " << empPtr[0]->salary() << endl;
	cout << hour->name() << " monthly salary is " << empPtr[1]->salary() << endl;
	cout << com->name() << " monthly salary is " << empPtr[2]->salary() << endl;
	cout << endl;



	return 0;
}