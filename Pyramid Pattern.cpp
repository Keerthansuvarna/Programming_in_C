#include<stdlib.h>
#include<iostream>
using namespace std;
                                       /*Code to print pyramid with any given character*/
int main()
{
    int n,i,j,a,b;
    /*n for pyramid hight ----> Number of rows
       i for select row & j for select column    */

    cout<<"Enter the number of lines required to print Pyramid in * Pattern"<<endl;
    cin>>n;

    int row = n; // Number of rows is equal to the hight of the pyramid
    int col = n +(n-1); // Number of column is equal to [row+(row-1)]

    /*Two parameters to decide where to print * pattern */
     a=n;
     b=n+1;
     // code to print * pyramid pattern

     for(i=1;i<=row;i++)
     {
         for(j=1;j<=col;j++)
         {
             if((i+j>a) && (i+j<=b) )
                {
                 cout<<"*"; //You can insert any character here to print pyramid pattern
                 }
              else
                {
                 cout<<" ";
                 }

         }
         b=b+2;
         cout<<endl;
     }
     return 0;
}


