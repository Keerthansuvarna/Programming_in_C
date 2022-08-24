#include<iostream>
#include<string>

using namespace std;

/*
############################ String Replace ###########################
replace method in string will be used to replace a targeted character or a string from the given replacement string.

So here we need
1. A string
2. Target (target---> name used in this coding) string which is going to replace (i.e a character / string)
3. Replacement (replace----> name used in this coding)string which is used to replace the pointed string.

syntax: string_parameter_name.replace(at what position the 1st charecter of the target string is present , target_string_size , replace_string);
ex: str1.replace(3, 4, "Hello");
*/

int main()
{
    string str1 = "first will comes first always first";
    string target = "first"; //which is going to replace "first"
    string replace = "second";

    //1st we need to find in what positions the word first is there with the help of "find"
    int position = str1.find(target);

    //Now need to replace the string with target
    while(position != string::npos)
    {
        str1.replace(position, target.size(), replace);

        //now once again we need to find the target using find method with next position / index
        position= str1.find(target, position+replace.size());
    }

cout<<str1<<endl;

    return 0;
}
