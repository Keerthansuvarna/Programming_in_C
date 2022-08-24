#include<iostream>
#include<string.h>

using namespace std;

/*
####################### String Extraction Using Substr Method #########################
substring is used to extract a character / a string from the given string.
Syntax: string_parameter_name.substring(index_at_which_we_want_to_extract , number of character);
ex: str1.substr(0,3);

*/

int main()
{
string str1 = "If debugging is the process of removing bugs, then programming must be the process of putting them in";
string target = "debugging";


int position = str1.find(target);
string extraction = str1.substr(position, target.size());
cout<<extraction<<endl;

    return 0;
}
