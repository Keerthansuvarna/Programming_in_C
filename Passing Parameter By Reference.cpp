#include<iostream>
using namespace std;
                                                         //Passing parameter by reference  - Swapping 2 Nos. using function
/*In function we can return or get only one value. The function will not update the actual values if we give the same name also.*/
/*This tutorial will explain how to update the actual values using passing parameters by reference i.e manipulate the values in its memory location itself*/
// no need to provide same name as passing parameter in the main function. (i.e, in this a & b)

void swap(int &c, int &d)
{
    int temp = c;
    c=d;
    d=temp;
    //updating values in its memory location itself.
}
int main()
{
    int a =10;
    int b = 20;

    cout<<"Before swapping ---> a is: "<<a<<" & b is: "<<b<<endl;

    swap(a,b);

    cout<<"After swapping ---> a is: "<<a<<" & b is: "<<b<<endl;

    return 0;
}
