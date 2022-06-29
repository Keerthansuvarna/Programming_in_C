#include<iostream>
/*Program to find Fibonacci series of any two positive numbers with selectable lenght*/
using namespace std;
int main()
{
    int num1,num2,sum=0,length,count=2;
    cout<<"Enter the first number in the Fibonacci series"<<endl;
    cin>>num1;
    cout<<"Enter the second number in the Fibonacci series"<<endl;
    cin>>num2;
    cout<<"Enter the length of Fibonacci series "<<endl;
    cin>>length;

    cout<<num1<<" ";
    cout<<num2<<" ";
    while(count<length)
    {
        sum=num1+num2;
        cout<<sum<<" ";
        num1=num2;
        num2=sum;
        count++;
    }
    return 0;

}
