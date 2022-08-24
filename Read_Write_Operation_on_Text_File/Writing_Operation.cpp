#include<iostream>
#include<string>
#include<fstream>

using namespace std;
       //Creating and writing into a text file
int main()
{
    ofstream myfile; //object name to create a text file
    myfile.open("Writing_Operation.txt");

    //myfile.open("C:\Codes\File\Writing_into_a_File\textfile.txt"); //to create text file in known directory

    /*Need to check file is opened or not*/
    if(myfile.fail())
    {
        cout<<"Error while creating the text file!!!"<<endl;
        exit(1);
    }

    myfile<<"Hello world"<<endl;   // Writing into created text file
    int a= 10;
    int b= 20;
    int sum = a+b;
    float avg = (float) sum/2;
    myfile<<"a: "<<a<<" b: "<<endl; // Writing into created text file
    myfile<< "Sum =  "<<sum<<endl; // Writing into created text file
    myfile<<"Average = "<<avg<<endl; // Writing into created text file
myfile.close();
    return 0;
}
