#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ifstream myfile; // Object to open a text file
    myfile.open("Reading_Operation.txt"); //To open a known text file from root directory
    if(!myfile)  // To check if the text file opened or not
    {
        cout<<"Error while opening the text file"<<endl;
        exit(1);
    }

 int val;
 int sum=0;
 float avg=0;
 int count =0;

    while(! myfile.eof())  //Reading data from text file
    {
        myfile>>val; //stores 1st value in val variable and repeat the process until end of file encounter.
        sum += val;
        count++;
        cout<<val<<" ";
    }
    myfile.close();
    cout<<endl;
    avg = (float) sum/count;
    cout<<"Total numbers available in the text file "<<count<<endl;
    cout<<"Sum of numbers = "<<sum<<endl;
    cout<<"Average of numbers = "<<avg<<endl;

    return 0;
}
