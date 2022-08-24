#include<iostream>
#include<string>

using namespace std;

int main()
{
    //Define the string
    string str1 = "Hello World";
    string str2 = "Hello Again";

    //Accessing every character of the string using "at" key word.

    cout<<str1.at(0)<<" "<<str1.at(3)<<" "<<str1.at(str1.length()-1)<<endl;   //This will display H l d
   cout<<str2[0]<<" "<<str2[3]<<" "<<str2[str2.length()-1]<<endl;                //This will also display H l n

   //Case conversion i.e, lower case to upper case & vice versa

//1. Lower case to Upper case:
int i=0;
   for(i=0;i<str1.length();i++)
   {
       if(str1.at(i) >= 'a' && str1.at(i) <= 'z')
       {
           str1.at(i) = str1.at(i) -32;  //A= 65 & a = 97
           cout<<str1.at(i);
       }
       else
        {
          cout<<str1.at(i);
       }

   }
   cout<<endl;

//1. Upper case to Lower case:

   for(i=0;i<str2.length();i++)
   {
       if(str2.at(i) >= 'A' && str2.at(i) <= 'Z')
       {
           str2.at(i) = str2.at(i) +32;  //A= 65 & a = 97
           cout<<str2.at(i);
       }
       else
        {
          cout<<str2.at(i);
       }

   }
   cout<<endl;

return 0;
}
