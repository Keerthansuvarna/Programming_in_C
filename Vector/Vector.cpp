#include<iostream>
#include<vector>
#include<fstream>


using namespace std;

int main()
{

    vector <int> v;
    ifstream fin;
    fin.open("data.txt");

    if(!fin)
{
   cout<<"Error in opening text file"<<endl;
   exit(0);
}

while(!fin.eof())
{
    int k;
    fin>>k;
    v.push_back(k);

    //the push_back will perform below operation
    //int i=0;
    //v[i]=k;

}

fin.close();

// code to read values from vector and print it on console window
/*By using normal for loop*/

//int total =0;
//int i=0;
/*for( i=0; i<v.size(); i++)
{
    cout<<v[i]<<" ";
    total = total + v[i];
}


*/
/*New "for" method for array which contain more than one values in its like vector */

int total =0;
for(int p:v) // for every interval value of "v" is passed to "p" and it will iterate to next value in the next cycle & terminate when eof encountered
{
cout<<p<<" "; //printing the current value of p
total += p; //to add all the numbers
}

cout<<endl;
double avg = (double) total/v.size();
cout<<"Average of all the number is : "<<avg<<endl;

    return 0;
}
