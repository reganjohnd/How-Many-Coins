#pragma once
#include <math.h>
#include <iostream>
using namespace std;

int coin_count()
{
	//declaring variable to store the cents amount returned by the change_conv function
	int change_amount{ change_conv() };

	//variables necessary for the computations
	int rem{};
	int tmp{};
	int coin_count{};

	//values of the coins we have available to provide change with
	int coins[7]{ 1, 2, 5, 10, 20, 50, 100 };

	/*determines how many of each coin needs to be returned
	and stores the number of coins used in coin_count until
	the entire change amount has been returned*/
	for (int i = 6; i >= 0; i--)
	{
		if (change_amount >= coins[i])
		{
			rem = change_amount % coins[i];
			tmp = change_amount - rem;
			coin_count += (tmp / coins[i]);
			change_amount = rem;
		}
	}

	return coin_count;
}