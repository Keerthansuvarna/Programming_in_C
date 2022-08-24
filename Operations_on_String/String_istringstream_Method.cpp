#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    /*
    string str1 = "1 2 3 4 5";
    string str2 = "1,2,3,4,5";
    string str3 = "Kee,1,Dee,2,Nee,3,See,4,Vee,5";
    string str4 = "Kee:1,Dee:2,Nee:3,See:4,Vee:5";
*/



    /*Extracting integer from the string*/
    string str1 = "1 2 3 4 5";
    istringstream iss1(str1);
    int k;
    while(iss1>>k)
    {
          cout<<k<<endl;
    }

cout<<endl;
cout<<"Jumps to next Code"<<endl;
cout<<endl;




/*Extracting integer from the string*/
string str2 = "1,2,3,4,5";
istringstream iss2(str2);
int j;
while(iss2>>j)
{
    cout<<j<<endl;
    if(iss2.peek() == ',');
    iss2.ignore();
}

cout<<endl;
cout<<"Jumps to next Code"<<endl;
cout<<endl;


string str3 = "Kee,1,Dee,2,Nee,3,See,4,Vee,5";
istringstream iss3(str3);
string part;
while(getline(iss3, part,  ','))
{
    cout<<part<<endl;
}


cout<<endl;
cout<<"Jumps to next Code"<<endl;
cout<<endl;


string str4 = "Kee:1,Dee:2,Nee:3,See:4,Vee:5";
istringstream iss4(str4);
string part2;
while(getline(iss4, part2, ','))
{
    string part3;
    istringstream iss5(part2);
    while(getline(iss5, part3, ':'))
    cout<<part3<<endl;
}

    return 0;
}
