#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Employee
{
    int empID;
    string name;
    int salary;
};

void printVectorData(vector <Employee> &emp) //Passing parameter by reference
{
    for(int i=0; i<emp.size(); i++)
    {
        Employee e = emp[i];
        cout<<e.empID<<"  "<<e.name<<"  "<<e.salary<<endl;
    }
}

int main()
{

vector <Employee> e; //Creating vector for Employee

Employee e1 = {1, "Kee", 100}; // creating 5 object for Employee with default values.
Employee e2 = {2, "Vee", 200};
Employee e3 = {1, "Dee", 300};
Employee e4 = {1, "See", 400};
Employee e5 = {1, "Nee", 500};

e.push_back(e1); //Passing 5 Employee object data into vector
e.push_back(e2);
e.push_back(e3);
e.push_back(e4);
e.push_back(e5);

printVectorData(e); //To print data present inside vector

    return 0;
}
