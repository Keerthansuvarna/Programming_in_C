#include<iostream>
#include<string>

using namespace std;
 //To find the given character of string in the given string.
 /*
 1. find --->Used to find the character of string in the current string
 2. npos -->no-position, return true if it reaches end of the string
 */

 int main()
 {
     string str = "A person asked a programmer why the sun rises in the east, and sets in the west. His response? It works, don't touch!";
     string target1 = "the";
     string target2 = ". ,?!'";
                                      //find

     //string::size_type index = str.find(target1);

    int index = str.find(target1);
     while(index!=string::npos)
     {
          cout<<"The target is found at : "<<index<<endl;
        index =  str.find(target1, index+1);
     }

     cout<<endl;


              //find_first_of

             int position = str.find_first_of(target2) ;
             while(position !=string::npos)
             {
                 cout<<"The target  "<<str[position]<<" at  "<< position<<endl;
                 position = str.find_first_of(target2, position+1);
             }


     return 0;

 }
