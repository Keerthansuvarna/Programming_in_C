#include<iostream>
#include<string>
 using namespace std;

 //Some useful methods in string

 /*
 1. front ---> To replace the 1st character from a string by another
 2. back---->To replace the last character from a string by another
 3. push_back---->To insert a character at the end of the current string
 4. pop_back----->To delete a character from the end of the current string
 5. append-------->To insert a string at the end of the current string
 6. insert---------->To insert a string into current string from any point
 */

 int main()
 {
     string str1 = "Hello World";

 //1. front
str1.front()='h';
 cout<<"front : "<<str1<<endl;

 //2. back
str1.back()='D';
 cout<<"back : "<<str1<<endl;

 //3. push_back
str1.push_back('.');
 cout<<"push_back : "<<str1<<endl;

//4. pop_back
str1.pop_back();
 cout<<"pop_back : "<<str1<<endl;

//5. append
str1.append(" is it??");
 cout<<"append : "<<str1<<endl;

 //5. insert
str1.insert(6, "oh hello ");
 cout<<"insert : "<<str1<<endl;


     return 0;
 }

