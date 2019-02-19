//==========================================
// Daniel Maher
// Harbert
// 2-19-2019
// Mortgage Calculator
//==========================================

#include <iostream>
#include <iomanip>
#include "Mortgage.cpp"
#include "Mortgage.h"
using namespace std;

bool inputIsValid(int i);
bool inputIsValid(double j);
void checkValid(bool v);

int main()
{
	int years;				// User input of number of years
	double payment;			// Payment calculated
	double loan;			// Loan amount
	double rate;			// Rate of interest
	bool valid = false;		// Input validity

	cout << "This program will calculate the money to pay on a mortgage." << endl;
	while (valid = false)
	{
		cout << "What is the amount of your loan?" << endl;
		cin >> loan;
		valid = inputIsValid(loan);
		checkValid(valid);
	}

	valid = false;

	while (valid = false)
	{
		cout << "What is the amount of your interest rate?" << endl;
		cin >> rate;
		valid = inputIsValid(rate);
		checkValid(valid);
	}

	valid = false;

	while (valid = false)
	{
		cout << "How long is your loan for, in whole years?" << endl;
		cin >> years;
		valid = inputIsValid(years);
		checkValid(valid);
	}

	Mortgage mortgage(rate, loan, years);
	payment = mortgage.paymentCalc();

	cout << "The total payment you will pay is: " << payment << endl;

	cout << "Program End" << endl;

}

//==========================================
// Name: inputIsValid
// Parameters: an int
// Return: true or false
// Purpose: Check if a double is less than 0
//==========================================
bool inputIsValid(int i)
{
	bool input;

	if (i < 0)
	{
		input = false;
	}
	else
	{
		input = true;
	}

	return input;
}

//==========================================
// Name: inputIsValid
// Parameters: a double
// Return: true or false
// Purpose: Check if a double is less than 0
//==========================================
bool inputIsValid(double j)
{
	bool input;

	if (j < 0)
	{
		input = false;
	}
	else
	{
		input = true;
	}

	return input;
}

//==========================================
// Name: checkValid
// Parameters: valid
// Return: None
// Purpose: Check if input is valid, display message if not
//==========================================
void checkValid(bool v)
{
	if (v == false)
	{
		cout << "Invalid input, enter another value." << endl;
	}
}