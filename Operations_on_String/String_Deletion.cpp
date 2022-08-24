#include<iostream>
#include<string>
using namespace std;

// Clearing entire string & deleting a character or a portion from the string

int main()
{
    string str1 = "Do not addict to drug do codding";
    string str2 = "Code is drug and peace";

                     /*Some useful functions*/
    // begin() ---> Used to point/index the 1st character of the string
    //end() ------->Used to point/index the last character of the string
    //clear()------>Used to clear the string
    //erase()------>Used to erase a portion or a character of a string
    //empty()----->Used to test whether the given string is empty or not

      //Clearing a string
      str2.clear();
      cout<<str2<<"This is String str2 after clear "<<endl;

      //To test if the string empty or not???
      if(str2.empty())
      {
          cout<<"String str2 is empty"<<endl;
      }
      else
     {
         cout<<"String str2 is not empty"<<endl;
      }

      //To delete a character from the string
      str1.erase(4, 1);
      /*To delete 4th character of the string, i.e, "o" from "not" from string str1 (5 indicates from where to start the delete
        & 1 indicates how many characters should it delete)   */

      cout<<"After deleting 5th character from string str1 (i,e, 'o' from 'not')"<<"  :  "<<str1<<endl;


//To delete the portion from the string
str1.erase(3,2);
cout<<"After deleting 3rd and 4th character from string str1 (i,e, nt ) "<<"  :  "<<str1<<endl;

str1.erase(str1.begin()+2, str1.end()-3);
cout<<"Custom deletion "<<"  :  "<<str1<<endl;


    return 0;
}
