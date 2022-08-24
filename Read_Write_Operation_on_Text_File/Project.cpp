#include<iostream>
#include<istream>
#include<sstream>
#include<fstream>
#include<iomanip>

/*Project to read data from a text file. Then data will be extracted and separated and saved on another text file */
using namespace std;

double getAverage(string mark); //Method to calculate average
char getGrade(double avg); //Method to calculate grade

int main()
{
    ifstream myfile("Project_Read.txt");
    if(!myfile)
    {
        cout<<"Error while opening a file"<<endl;
        exit(1);
    }


    ofstream myreport("Report.txt");
    if(!myreport)
    {
        cout<<"Error while opening a file"<<endl;
        exit(1);
    }

    //Printing on console window
cout<<"Text file generated successfully as shown below "<<endl;
cout<<endl;
cout<<setw(15)<<"Student Report"<<endl;
cout<<string(19, '-')<<endl;
cout<<setw(5)  <<left<<"Name "
       <<setw(5)  <<left<<"Average "
       <<setw(5)  <<left<<"Grade "<<endl;
cout<<string(19, '-')<<endl;


  //To write into text file
myreport<<endl;
myreport<<setw(15)<<"Student Report"<<endl;
myreport<<string(19, '-')<<endl;
myreport<<setw(5)  <<left<<"Name "
       <<setw(5)  <<left<<"Average "
       <<setw(5)  <<left<<"Grade "<<endl;
myreport<<string(19, '-')<<endl;

    string  line;
    while(! myfile.eof())  // Extract and separating data
    {
        getline(myfile, line);
        istringstream iss(line);
        if(line == "\0")
        {
            break;
        }
    //cout<<line<<" ---------> ";
       string name;
       string mark;
       getline(iss, name, ':');
       getline(iss, mark, ':');
       double avg = getAverage(mark);
       char grade = getGrade(avg);
       //cout<<name<<" "<<mark<<"  Average: "<<avg<<"  Grade: "<<grade<<endl;
       cout<<setw(5)<<left<<name
              <<setw(6)<<right<<setprecision(2)<<fixed<<avg
              <<setw(5)<<right<<grade<<endl;
 //To write into text file
               myreport<<setw(5)<<left<<name
              <<setw(6)<<right<<setprecision(2)<<fixed<<avg
              <<setw(5)<<right<<grade<<endl;

    }


    myfile.close();
    myreport.close();
    return 0;
}

double getAverage(string mark)
{
    string score;
    double total=0;
    int count=0;
    istringstream iss(mark);
    while(!iss.eof())
    {
        getline(iss, score, ',');
        count++;
        total =total+atoi(score.c_str());
    }
double avg = total/count;
return avg;
}


char getGrade(double avg)
{
    if(avg>90)
    {
        return 'A';
    }

    else if(avg>80 && avg<90)
    {
        return 'B';
    }

     else if(avg>70 && avg<80)
     {
         return 'C';
     }

      else if(avg>60 && avg<70)
     {
         return 'D';
     }

      else if(avg>50 && avg<60)
     {
         return 'E';
     }

      else if(avg<50)
     {
         return 'C';
     }


}
