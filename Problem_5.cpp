// Problem 5 - Smallest multiple

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

using namespace std;

int factorial(int number)
{
	int factorialValue = 1;
	for (int i = 1; i <= number; i++)
	{
		factorialValue = factorialValue * i;
	}

	return factorialValue;
}

int main()
{
	unsigned long long limit;
	int counter;

	limit = factorial(20);

	for (int i = 1; i < limit; i++)
	{
		counter = 0;
		for (int j = 1; j <= 20; j++)
		{
			if (i % j == 0)
			{
				counter++;
			}
		}
		if (counter == 20)
		{
			cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: " << i << endl;
			break;
		}
	}

	return 0;
}
