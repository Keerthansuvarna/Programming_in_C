#include<iostream>
#include<cmath>

/*Program to find the Armstrong Number*/

using namespace std;

/*If the sum of its own digits raised to the power number of digits gives the number itself then it is known as Armstrong number
for ex: 371
    Which has 3 digits,
    Therefore the sum of its own digits raised to the power number of digits is given by,
    3^3 + 7^3 + 1^3  = 371.
    Hence the number 371 is equal to the sum of its own digits raised to the power number of digits.
    i.e, 371 = 3^3 + 7^3 + 1^3
     */

/*Function to find the total digits in a given number*/
int numDigit(int n)
{
    int count =0;
    int rem;
    while(n>0)
    {
        n = n/10;
/* Count is the total number of digits in any given number */
        count++;
    }
    return count;
}


/*To check if the number if Armstrong number */
int isAmstrongNumber(int number)
{
    /*Calling the function to get the number of digits in given number */
   int totalDigits = numDigit(number);

    int sum =0;
    int remainder;
    while(number>0)
    {
remainder =number%10;
sum+=pow(remainder, totalDigits );
number=number/10;
    }
    return sum;
}


 int main()
 {
    //int number;
     //cout<<"Enter the number to check it is a Armstrong Number"<<endl;
   // cin>>number;

   int i;
   for(i=0;i<1000;i++)
   {
       int sum = isAmstrongNumber(i);
if(sum==i)
cout<<sum<<", ";
   }

/*int sum = isAmstrongNumber(number);
if(sum==number)
cout<<" Given number is a Armstrong number "<<number<<"= "<<sum<<endl;
else
    cout<<"The given number is not a Armstrong Number!!!"<<endl;
return 0;
*/


return 0;

 }




