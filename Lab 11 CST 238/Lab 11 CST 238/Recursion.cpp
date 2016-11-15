#include "Recursion.h"
int Recursion::DigitSum(int n)
{
	if (n < 0)
	{
		cerr << "Number must be positive. \n";//error case
		return 0;
	}
	if (n < 10)//base case
	{
		return n;
	}
	int rightmost = n % 10;
	return DigitSum((n / 10)) + rightmost;
}
int Recursion::BunnyEars(int bunnies)
{
	int sum = 2;
	if (bunnies == 0)//base case
	{
		return bunnies;
	}
	
	else {
		bunnies--;
		return sum + BunnyEars(bunnies);
	}
	
}