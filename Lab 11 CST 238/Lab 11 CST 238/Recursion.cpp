#include "Recursion.h"
int DigitSum(int n)
{
	if (n < 0)
	{
		cout << "Number must be positive. \n";
		return 0;
	}
	if (n < 10)
	{
		return n;
	}
	int rightmost = n % 10;
	return DigitSum(n / 10 + rightmost);
}
