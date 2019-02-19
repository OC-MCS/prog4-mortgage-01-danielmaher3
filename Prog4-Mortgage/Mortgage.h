#pragma once

class Mortgage
{
private:
	double rate;
	double loan;
	int years;
public:
	Mortgage();
	Mortgage(double, double, int);
	double termCalc();
	double getTerm();
	double paymentCalc();
};