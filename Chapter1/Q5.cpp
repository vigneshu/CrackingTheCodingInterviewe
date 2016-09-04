#include <iostream>
#include <string>

using namespace std;

string compressString(string str)
{
    string compressedString;
    string::iterator it = str.begin();
    char prevChar = *it;
    int charCount = 1;
    while(it != str.end())
    {
        it++;
        char curChar = *it;
        if(curChar == prevChar)
            charCount++;
        else{
        string number =   to_string(charCount); 
        compressedString.append(prevChar+number); 
        charCount = 1;
        }
        
        prevChar = curChar;
    }
    return compressedString;
}
int main()
{
   string str;
   cout<<"Enter string : ";
   getline(cin,str);
   string compressedString = compressString(str);
    cout<<"Compressed String  : "<<compressedString<<endl;
     cout<<"String   : "<<str<<endl;
   if(compressedString.length()<=str.length())
    str = compressedString;
    cout<<"Compressed String  : "<<str<<endl;
   return 0;
}

