#include<iostream>
#include<string>

using namespace std;

/*Declaring structure out side the main*/

struct Account
{
    int accNo;
    string name;
    int balance;
};


 /*calling inputDatatoAccount */
Account inputDatatoAccount()
{
    Account acc;
    cout<<"Enter Account Number--> ";
    cin>>acc.accNo;
    cout<<"Enter Account Holder Name--> ";
    cin>>acc.name;
    cout<<"Enter Initial Balance--> ";
    cin>>acc.balance;
    cout<<endl;
    return acc;
}

void displayAccount(Account acc)   //Example for passing parameter, used while there are no changes made for parameters
{
    cout<<"Account Details "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Account Number : "<<acc.accNo<<endl;
    cout<<"Account Holder Name : "<<acc.name<<endl;
    cout<<"Initial Balance : "<<acc.balance<<endl;

}

void updateAccount(Account &acc) //Example for passing parameter by reference, used while there are some changes made for parameters
{
    char check;
    cout<<endl;
    cout<<"Press 'Y' if any changes required or to quit press 'N' "<<endl;
    cin>>check;

    if(check == 'Y' || check == 'y')
    {
        cout<<"You opted Yes"<<endl;
        cout<<"Enter Change in Account Number--> ";
        cin>>acc.accNo;
        cout<<"Enter Change in Account Holder Name--> ";
        cin>>acc.name;
        cout<<"Enter Change in Initial Balance--> ";
        cin>>acc.balance;
        cout<<endl;
    }

    else
    {
        cout<<"You opted No.....Quitting shortly!!!"<<endl;
        cout<<endl;
    }

}


bool  debitcreditAccount(Account &acc, double amount, int option)
{
    bool success = false;
    if(option == 1)
    {
        if(amount>acc.balance || amount<0)
        {
             success = false;
            return success;
        }

         else
       {
           acc.balance -=amount;
           success = true;
           return success;
        }

    }

    else  if(option == 2)
    {
        if(amount<0)
        {
             success = false;
            return success;
        }

         else
       {
           acc.balance +=amount;
           success = true;
           return success;
        }
    }

    else
    {
        cout<<"Invalid option opted!!!!"<<endl;
    }
}


int main()
{

Account a;
a = inputDatatoAccount(); //To input data structure
displayAccount(a); //To display all the parameters present inside the structure
updateAccount(a); //To edit / change parameters in structure
displayAccount(a);

double amount;
int option;
cout<<endl;
cout<<"For Withdraw press 1 and for Deposit press 2 "<<endl;
cin>>option;

if(option == 1)
{
    cout<<"You opted for Withdraw "<<endl;
    cout<<"Enter the amount to be Withdraw--> ";
    cin>>amount;
    bool success =  debitcreditAccount(a, amount, option);
    if(success)
    {
        cout<<"Successfully Withdraw $ "<<amount<<endl;
        cout<<"Available Balance : "<<a.balance<<endl;
    }

    else
    {
        cout<<"Insufficient Balance!! Please try again later ."<<endl;
        cout<<"Available Balance : "<<a.balance<<endl;
    }
}

else if(option == 2)
{
    cout<<"You opted for Deposit "<<endl;
    cout<<"Enter the amount to be Deposit--> ";
    cin>>amount;
    bool success = debitcreditAccount(a, amount, option);

    if(success)
    {
        cout<<"Successfully Deposited $ "<<amount<<endl;
        cout<<"Available Balance : "<<a.balance<<endl;
    }

     else
    {
        cout<<"Insufficient Balance!! Please try again later ."<<endl;
        cout<<"Available Balance : "<<a.balance<<endl;
    }
}

else
{
    cout<<"Invalid option opted "<<endl;
}

    return 0;
}
