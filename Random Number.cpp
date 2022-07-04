#include<iostream>
#include<cstdlib>      //Library file used to generate random numbers
#include<ctime>       //Library file used to get system time

/*program to generate Random numbers*/
using namespace std;
int main()
{
    /*We need to use the system time as a seed to generate different random numbers each time whenever we execute the code */
    long a =time(NULL); // System tile will provide a different numbers for each milliseconds.
    //cout<<a<<"  ";

    /*Seed system time to generate random numbers*/
    srand(a);
    //srand(100);

    /*To generate 10 random numbers*/
    for(int i=0;i<10;i++)
    {
        cout<<rand()<<endl;
    }

    return 0;
}
