// Problem 3 - Largest prime factor

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

using namespace std;

int main()
{	
	long long numberToFactor = 600851475143;
	
	do
	{
		for (long long i = 2; i < 600851475143; i++)
		{
			if (numberToFactor % i == 0)
			{
				cout << "Found a prime factor of: " << i << endl;
				numberToFactor = numberToFactor / i;
				cout << "Now processing: " << numberToFactor << endl;
				break;
			}
		}
	} while ( numberToFactor > 1);

	cout << endl << "Number arrived at 1, finished factorizing, please see the last factor for the largest prime factor" << endl;

	return 0;
}
