// Problem 10 - Summation of primes

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
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
	long long sumOfPrimes = 2;

	while (numberToCheck < 2000000)
	{
		if (checkPrime(numberToCheck) == 1)
		{
			cout << numberToCheck << " is prime" << endl;
			sumOfPrimes = sumOfPrimes + numberToCheck;
			cout << "The new sum is: " << sumOfPrimes << endl;
			numberToCheck = numberToCheck + 2;
		}
		else
		{
			numberToCheck = numberToCheck + 2;
		}
	}

	cout << "The sum of primes below 2000000 is: " << sumOfPrimes << endl;

	return 0;
}
