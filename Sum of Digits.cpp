#include<iostream>

/*Program to find sum of digits*/

using   namespace std;
int main()
{
    int number, rem=0, sum=0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    cout<<endl;

    /*Code to separate digits from given number */
    while(number !=0)
    {
        /*Uncomment all the "cout statement" to observe what is happening after every mathematical expression*/

         /*Extraction of the last digit from the given number*/
        rem = number % 10;
        int i=number;
       // cout<<"Last digit of a number "<<number<<" is--> "<<rem<<" "<<"    ";

        /*Adding Last digits to get sum that numbers*/
        int j =sum;
        sum = sum+rem;
        //cout<<"The sum of  "<<rem<<" & " <<j<<" is--> "<<sum<<"    ";

         /*Deleting last digit from the given number*/
        number = number/10;
        //cout<<"Deleting last digit from number "<<i<<" is--> "<<number<<endl;
    }
    //cout<<endl;
    cout<<"The sum of given number is  "<<" "<<sum<<endl;
    return 0;
}
