#include<iostream>
#include<string>

/*
####################  String Compare  ######################
 String Compare used to compare any 2 string & it will return integer value based on the string.
 if 1st string will comes 1st in dictionary than 2nd string then it will return -1
 if 1st string will comes last in dictionary than 2nd string then it will return +1
 if both strings are same then it will return 0
*/

using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";

    if(str1<str2)
    {
        cout<<"str1 is comes 1st in dictionary"<<endl;
    }

    else
    {
        cout<<"str2 is comes 1st in dictionary"<<endl;
    }

    int p1 = str1.compare(str2);
    cout<<"P1 is: "<<p1<<endl;

      int p2 = str2.compare(str1);
     cout<<"P2 is: "<<p2<<endl;

     int p3 = str2.compare(str2);
     cout<<"P3 is: "<<p3<<endl;


    return 0;

}
