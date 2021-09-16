//**********************************************************************
// File:				main.cpp
// Author:			Bryant Hayden
// Date:				9/16/21
// Class:				CS150-1
// Assignment:	A Mortgage Calculator
// Purpose:			Calulate loan imfromation
// Hours:				1.5
//**********************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double loan;
	double rate;
	double payment;
	double months;
	double years;
	
	cout << "*******************" << endl;
	cout << "Mortgage Calculator" << endl;
	cout << "*******************" << endl;
	cout << endl;

	//Retrieve loan amount and check that it is positive
	cout << "Enter Loan Amount: $";
	cin >> loan;
	if (loan < 0) {
		cout << "Incorrect Input - Terminating Program" << endl;
		return EXIT_SUCCESS;
	}

	//Retrieve interest rate and check that it is positive
	cout << "Enter Interest Rate: %";
	cin >> rate;
	if (rate < 0) {
		cout << "Incorrect Input - Terminating Program" << endl;
		return EXIT_SUCCESS;
	}

	//Retieve years and check that it is positive
	cout << "Enter Number Of Years: ";
	cin >> years;
	if (years < 0) {
		cout << "Incorrect Input - Terminating Program" << endl;
		return EXIT_SUCCESS;
	}

	//convert rate into simple double from %6 to .06 to .005
	rate = rate / 100 / 12;

	//years to months 
	months = years * 12;

	//equation finds monthly payment of any loan
	payment = loan * (rate * (pow(1 + rate, months))) /
		(pow(1 + rate, months) - 1);

	cout << endl;
	cout << "**************************************" << endl;
	cout << "Monthly Mortgage Payment: $" << payment << endl;
	cout << "Total Interest Paid: $" << payment * months - loan << endl;
	cout << "**************************************" << endl;

	return EXIT_SUCCESS;

} 