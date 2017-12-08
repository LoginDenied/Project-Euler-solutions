#include <iostream>

using namespace std;

// Declarations

int main()
{
	for (int a = 1; a <= 995; a++)
	{
		for (int b = 1; b <= 996; b++)
		{
			for (int c = 1; c <= 997; c++)
			{
				if (((a+b+c) == 1000) && ((a*a) + (b*b)) == (c*c) && (a < b) && (b < c))
				{
					cout << a*b*c << endl;
				}
			}
		}
	}
    return 0;
}
