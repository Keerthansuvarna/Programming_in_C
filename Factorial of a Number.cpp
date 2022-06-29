#include<iostream>
/*Code to find Factorial of a number*/
using namespace std;
int main()
{
	int number = 0;
	int i=0;
	/*Factorial of ZERO, 0!=1, hence initialize the factorial value to 1*/
	int factorial = 1;
	cout << "Enter the number" << endl;
	cin >> number;

	/*Check whether the number is less than ZERO*/

	if (number < 0)
	{
		/*If the number is negative then print the error and terminate the program from further execution*/
		cout << "Cannot find the factorial for negative numbers" << endl;
		/*Terminate the code from the further execution*/
		return 0;
	}
     i=1;
	/*TO find the factorial of any given number if it is not a negative number */
		while (i <= number)
		{
			factorial *= i; //factorial = factorial * i
			i++;
		}

		cout << "Factorial of  " << number << "  is :  " << factorial << endl;

	return 0;
}
