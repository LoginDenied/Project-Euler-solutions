// In progress, code checked and works for case < 10000

// Problem 387 - Harshad Numbers

/*
A Harshad or Niven number is a number that is divisible by the sum of its digits.
201 is a Harshad number because it is divisible by 3 (the sum of its digits.)
When we truncate the last digit from 201, we get 20, which is a Harshad number.
When we truncate the last digit from 20, we get 2, which is also a Harshad number.
Let's call a Harshad number that, while recursively truncating the last digit, always results in a Harshad number a right truncatable Harshad number.

Also:
201/3=67 which is prime.
Let's call a Harshad number that, when divided by the sum of its digits, results in a prime a strong Harshad number.

Now take the number 2011 which is prime.
When we truncate the last digit from it we get 201, a strong Harshad number that is also right truncatable.
Let's call such primes strong, right truncatable Harshad primes.

You are given that the sum of the strong, right truncatable Harshad primes less than 10000 is 90619.

Find the sum of the strong, right truncatable Harshad primes less than 1014.
*/

#include <iostream>

using namespace std;

int getLengthOfInt(int number)
{
	int length = 1;
	while (number > 9)
	{
		number = number / 10;
		length++;
	}

	return length;
}

int getNumberAtPosition(int number, int position)
{
	int temp;
	int numberAtPosition;
	temp = number / pow(10, (getLengthOfInt(number) - position));
	numberAtPosition = temp % 10;

	return numberAtPosition;
}

int getSumOfNumbersInInt(int number)
{
	int sum = 0;

	for (int i = 1; i <= getLengthOfInt(number); i++)
	{
		sum = sum + getNumberAtPosition(number,i);
	}

	return sum;
}

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


int checkHarshad(int number)
{
	int isHarshad;

	if ((number % getSumOfNumbersInInt(number)) == 0)
	{
		isHarshad = 1;
	}
	else
	{
		isHarshad = 0;
	}

	return isHarshad;
}

int checkStrongHarshad(int number)
{
	int strongHarshad;

	if (checkHarshad(number) == 1)
	{
		if ((checkPrime(number / getSumOfNumbersInInt(number))) == 1)
		{
			strongHarshad = 1;
		}
		else
		{
			strongHarshad = 0;
		}
	}
	else
	{
		strongHarshad = 0;
	}

	return strongHarshad;
}

int checkRightTruncatableHarshad(int number)
{
	int rightTruncatableHarshad;
	int counter = 0;
	int lengthOfNumber = getLengthOfInt(number);

	for (int i = 1; i <= lengthOfNumber; i++)
	{
		if (checkHarshad(number) == 1)
		{
			counter++;
			number = number / 10;
		}
	}

	if (counter == lengthOfNumber)
	{
		rightTruncatableHarshad = 1;
	}
	else
	{
		rightTruncatableHarshad = 0;
	}

	return rightTruncatableHarshad;
}

int main()
{
	int sum = 0;
	int currentCheckingValue;

	for (int i = 1; i < 10000; i++)
	{
		cout << "Checking: " << i << endl;
		currentCheckingValue = i;
		if (checkPrime(currentCheckingValue) == 1)
		{
			if (i > 9)
			{
				currentCheckingValue = currentCheckingValue / 10;
			}
			if ((checkStrongHarshad(currentCheckingValue) == 1) && (checkRightTruncatableHarshad(currentCheckingValue) == 1))
			{
				sum = sum + i;
				cout << i << " is a strong right truncatable Harshad prime" << endl;
			}
		}
	}

	cout << "The sum of strong right truncatable Harshad primes < 10000 is: " << sum << endl;

	return 0;
}
