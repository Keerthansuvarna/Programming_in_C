#include<iostream>
/*Program to find Fibonacci series of any two positive numbers with selectable lenght*/
using namespace std;
int main()
{
    /*Lets Input two numbers & length of the series*/
    int num1,num2,sum=0,length,count=2;
    cout<<"Enter the first number in the Fibonacci series"<<endl;
    cin>>num1;
    cout<<"Enter the second number in the Fibonacci series"<<endl;
    cin>>num2;
    cout<<"Enter the length of Fibonacci series "<<endl;
    cin>>length;
  /* Lets print the two numbers*/
    cout<<num1<<" "<<num2<<" ";
    /* Now we need to find the other Fibonacci series for given length*/
    while(count<length)
    {
        /* Fibonacci series = num1+num2 in every iteration*/
        sum=num1+num2;
        /*Print the new number in the series*/
        cout<<sum<<" ";
        /* we need to update the number1 and number 2 each iteration to its updated value.*/
        /*i.e, number1 will become number2 & number 2 will become sum*/
        num1=num2;
        num2=sum;
        count++;
    }
    return 0;

}
