// Problem 6 - Sum square difference

/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

// Declarations
int sumOfSquares;
int sum;
int difference;

int main()
{
	for (int i = 1; i < 101; i++)
	{
		sumOfSquares = sumOfSquares + (i * i);
	}

	for (int i = 1; i < 101; i++)
	{
		sum = sum + i;
	}
	
	difference = (sum * sum) - sumOfSquares;
	cout << difference << endl;

  return 0;
}
