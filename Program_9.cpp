// Problem 9 - 	Special Pythagorean triplet

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>

using namespace std;

int main()
{
	for (int a = 1; a <= 995; a++)
	{
		for (int b = 1; b <= 996; b++)
		{
			for (int c = 1; c <= 997; c++)
			{
				if (((a + b + c) == 1000) && ((a*a) + (b*b)) == (c*c) && (a < b) && (b < c))
				{
					cout << a*b*c << endl;
				}
			}
		}
	}
	return 0;
}
