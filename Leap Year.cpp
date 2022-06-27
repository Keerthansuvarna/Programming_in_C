#include <iostream>
using namespace std;

//*                                                                                   */
//* ########################## About finding Leap Year #################################
//|
//|                               Is year divided by 4?
//|                   Yes_____________________|____________________________ N
//|                     |                                                   |
//|       Is it divided by 100??                                     Not a Leap Year
//|        |                  |
//|        No                Yes   
//|       |                  |
//|  It is a Leap Year     Is it divided by 400??   
//|                                    |
//|                                 Not a Leap Year
//|_______________________________________________________________________________________
//*/

int main()
{
    int year;
    cout << " Enter the Year" << endl;
    cin >> year;
    cout << "You entered: " << year << endl;


    /*Finding Leap Year using nested if else statements*/
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " " << "is a Leap Year" << endl;
            }
            else
            cout << year << " " << "is not a Leap Year" << endl;
        }
        else
        cout << year << " " << "is Leap Year" << endl;
    }
    else
    cout << year << " " << "is not a Leap Year" << endl;



    /*Finding Leap Year using using Logical Operator*/
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " " << "is a Leap Year" << endl;
    }
    else
        cout << year << " " << "is not a Leap Year" << endl;



        /*Finding Leap Year using using conditional operator*/


        cout << (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Entered year is a Leap Year" : "Entered year is not a Leap Year");

}








