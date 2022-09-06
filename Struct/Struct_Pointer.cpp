#include<iostream>
#include<string>

using namespace std;

struct Employee
{
    int empID;
    int salary;
    string name;
};

int main()
{
    Employee e; //creating a object e
    e.empID = 100; // Normal way to initialize the value
    e.salary = 1;
    e.name = "Kee";
    cout<<e.empID<<" "<<e.salary<<" "<<e.name<<endl;
    cout<<endl;

             /*Using pointer*/

    Employee *p = &e; // using pointer coping already created objected into pointer "p"
    p->empID = 200;
    p->salary = 2;
    p->name = "Dee";
    cout<<  p->empID<<"  "<<e.salary<<" "<<p->name<<endl;
     cout<<endl;


    /*Using dynamic memory allocation - not reccommended*/

    /*
    Employee *v = new Employee;
    v->empID = 300;
    v->salary =3;
    v->name = "See";
    cout<<  v->empID<<"  "<<v->salary<<" "<<v->name<<endl;
    cout<<  (*v).empID<<"  "<<(*v).salary<<" "<<(*v).name<<endl;
     cout<<endl;

delete v; // always use delete keyword if you use dynamic memory allocation

*/

    return 0;
}
