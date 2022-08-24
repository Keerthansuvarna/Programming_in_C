#include<iostream>
#include<sstream>
#include<string>

/*Inserting other variable types into string using Ostringstream Method*/
using namespace std;
int main()
{

string str = "Hello ";
int age = 10;

ostringstream oss;
oss<<str<<": "<<age;
str = oss.str();
cout<<str<<endl;


    return 0;
}
