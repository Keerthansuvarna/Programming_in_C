#include<iostream>
#include<string>

using namespace std;

struct Employee
{
    int empID;
    string name;
    int salary;
};

void inputData(Employee e[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<"Employee ID : ";
        cin>>e[i].empID;
        cout<<"Name : ";
        cin>>e[i].name;
        cout<<"Salary : ";
        cin>>e[i].salary;
        cout<<endl;
    }
}

void displayData(Employee e[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<e[i].empID<<"  "<<e[i].name<<"  "<<e[i].salary<<endl;
        cout<<"--------------------------"<<endl;
    }
}


int main()
{
    const int SIZE =3;
    Employee e[SIZE];

    inputData(e, SIZE);
    displayData(e, SIZE);


    return 0;
}
