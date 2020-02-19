#pragma once
#include <iostream>
using namespace std;
#include <math.h>

int change_conv()
{
	//creating variable to store the value of change that needs to be returned
	double change_amount{};

	//asking for a change amount as long as the amount is a positive number
	do
	{
		cout << "Change: ";
		cin >> change_amount;
	} while (change_amount < 0);

	//transforming the change amount to cents. example: from R3.40 to 340c
	change_amount = round(change_amount * 100);

	//no data will be lost by returning an int as the double value contains no decimals after it has been transformed
	return change_amount;
}