#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void display (vector <int> &v)  // Declaration of method for vector (For integer)
{
    cout<<"Size of vector : "<<v.size()<<"  Capacity of vector : "<<v.capacity()<<endl;
    cout<<"Content of vector : ";
    for(int p:v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
}

void show (vector <string> &u )
{
    //cout<<"Size of vector : "<<u.size()<<"  Capacity of vector : "<<u.capacity()<<endl;
    cout<<"Content of vector : ";
    for(string p:u)
    {
        cout<<p<<" ";
    }
    cout<<endl;
}



int main()
{

    vector <int>  v1;  //Declaration of empty vector class
    display(v1); //Passing empty vector to display method
    cout<<endl;

     vector <int>  v2(5);  //Declaration of vector with 5 element with default value zero all 5 elements.
     display(v2);
     cout<<endl;

      vector <int> v3(5, -1); //Declaration of vector with 5 element with default value -1 for all 5 elements
      display(v3);
      cout<<endl;

      int x[5] = {1, 2, 3, 4, 5};
      vector <int> v4(x, x+5); //Passing an array into vector
      vector <int> v5(x+1, x+4); //Passing a portion of the array into vector
      display(v4);
      display(v5);
      cout<<endl;

      vector <int> v6(v4); //Deep copying a vector to a vector
      vector <int> v7(v4.begin(), v4.end()); //Copying a portion of a vector
      vector <int> v8(v4.begin()+1, v4.begin()+3); //Copying a portion of a vector
      vector <int> v9(v4.rbegin(), v4.rend()); //Copying a portion of a vector in reverse order
      display(v6);
      display(v7);
      display(v8);
      display(v9);
      cout<<endl;


                        /*Operation on string*/

        vector <string> n1 = {"Dee", "Kee", "Vee", "Nee", "See", "Bee" }; //vector declaration for string
        vector <string> n2(n1); //Copying vector
        show(n1);
        show(n1);
        cout<<endl;

        n1.front()= "DeeDee";  // To replace 1st string with another
        show(n1);
        n1.back()= "BeeBee";  // To replace last string with another
        show(n1);
        cout<<endl;


        n1.erase(n1.begin()); // To erase 1st element of string
        show(n1);

        n1.erase(n1.end()); // To erase last element of string
        show(n1);

        n1.erase(n1.begin(), n1.end());  // To erase entire string
        show(n1);

        n2.erase(n2.begin(), n2.begin()+3);  // To erase a portion
        show(n2);

        n2.erase(n2.begin() + n2.size()-2, n2.end());  // To erase last 2 string
        show(n2);

        n2.insert(n2.begin(), "AAA"); // To insert a string at the start of the string
        show(n2);

        n2.insert(n2.end(), "ZZZ"); // To insert a string at the end of the string
        show(n2);

        n2.pop_back(); //To delete last element in the string
        show(n2);




    return 0;
}
