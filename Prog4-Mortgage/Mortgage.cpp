//==========================================
// Mortgage.cpp
// All Mortgage functions and variables
// Includes cmath and the Mortgage class
//==========================================
#include "Mortgage.h"
#include <cmath>

//==========================================
// Constructor
// Initializes all vvariables to 0
//==========================================
Mortgage::Mortgage()
{
	rate = 0;
	loan = 0;
	years = 0;
}

//==========================================
// Constructor
// Initializes all variables to a given amount
//==========================================
Mortgage::Mortgage(double r, double l, int y)
{
	rate = r;
	loan = l;
	years = y;
}

//==========================================
// Name: termCalc
// Parameters: None
// Return: Double, term
// Purpose: Calculate term
//==========================================
double Mortgage::termCalc()
{
	// Declare term
	double term = 0;
	// Power variable
	int p = 12 * years;
	// Calculate term per formula in the book
	term = (1 + (rate / 12));
	term = pow(term, p);
	// Retrun term
	return term;
}

//==========================================
// Name: getTerm
// Parameters: None
// Return: term
// Purpose: Get term, without using a parameter
//==========================================
double Mortgage::getTerm()
{
	double term = termCalc();
	return term;
}

//==========================================
// Name: paymentCalc
// Paramters: None
// Return: Double, total payment
// Purpose: Calculate total payment
//==========================================
double Mortgage::paymentCalc()
{
	double term = getTerm();
	// Payment variable
	double payment;
	// Calculate payemt according to given formula
	payment = (loan * (rate / 12) * term) / (term - 1);
	// Return payment as a double	
	return payment;
}