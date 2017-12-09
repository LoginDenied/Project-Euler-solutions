// Problem 4 - Largest palindrome product

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <cmath>

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

int getNumberAtPosition(int number,int position)
{
	int temp;
	int numberAtPosition;
	temp = number / pow(10, (getLengthOfInt(number) - position));
	numberAtPosition = temp % 10;

	return numberAtPosition;
}

int main()
{
	int product;
	int lengthOfProduct;
	int matchCounter;
	int largestPalindrome = 1;

	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j < 1000; j++)
		{
			product = i * j;
			lengthOfProduct = getLengthOfInt(product);
			matchCounter = 0;
			for (int k = 1; k <= (lengthOfProduct / 2); k++)
			{
				if (getNumberAtPosition(product,k) == getNumberAtPosition(product,(lengthOfProduct - k + 1)))
				{
					matchCounter++;
				}
			}
			if ((matchCounter == (lengthOfProduct/2)) && (product > largestPalindrome))
			{
				largestPalindrome = product;
			}
		}
	}

	cout << "The largest palindrome thats a product of two three digit numbers is: " << largestPalindrome << endl;

    return 0;
}
