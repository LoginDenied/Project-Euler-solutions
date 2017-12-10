// Problem 7 - 10001st prime

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>

using namespace std;

int checkPrime(int number)
{
	int counter = 0;
	int isPrime;
	for (int i = 2; i < number; i++)
	{
		if (number % i != 0)
		{
			counter++;
		}
	}

	if (counter == (number - 2))
	{
		isPrime = 1;
	}
	else
	{
		isPrime = 0;
	}

	return isPrime;
}

int main()
{
	int numberToCheck = 3;
	int counter = 1;

	while (counter < 10001)
	{
		while (true)
		{
			if (checkPrime(numberToCheck) == 1)
			{
				counter++;
				numberToCheck = numberToCheck + 2;
				break;
			}
			else
			{
				numberToCheck = numberToCheck + 2;
			}
		}
	}

	cout << "The 10001st prime is: " << numberToCheck - 2 << endl;

    return 0;
}
