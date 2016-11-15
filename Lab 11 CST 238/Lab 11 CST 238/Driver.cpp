#include "Recursion.h"
void main()
{
	int number;
	Recursion a;
	cout << "enter a number in which you would like to find the sum of its digits.\n";
	cin >> number;
	if (number < 0)
	{
		cerr << "Number must be positive. \n";//error case	
	}
	else { cout << a.DigitSum(number) << endl; }
	//cout << (1024 / 10) << endl << (1024 % 10) << endl; 
	int bun;
	cout << "Enter number of bunnies: \n";
	cin >> bun;
	if (bun < 0)
	{
		cerr << "Number of bunnies must be positive.\n";//error case
	}
	else { cout << a.BunnyEars(bun) << endl; }

	LinkedList b;
	for (int i = 0; i < 10; i++)
	{
		b.insert(i, i);
	}
	cout << b.CountElements();
}