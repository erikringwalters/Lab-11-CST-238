#include "Recursion.h"
void main()
{
	int number;
	Recursion a;
	cout << "enter a number in which you would like to find the sum of its digits.\n";
	cin >> number;
	cout << a.DigitSum(number) << endl;
	//cout << (1024 / 10) << endl << (1024 % 10) << endl; 
	int bun;
	cout << "Enter number of bunnies: \n";
	cin >> bun;
	cout <<	a.BunnyEars(bun) << endl;

}