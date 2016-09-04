#include <iostream>
#include <string>

using namespace std;

string replaceSpaces(string* strPointer)
{
    string str = *strPointer;
    bool spaceExists = true;
    int spaceIndex;
    spaceIndex = str.find(" ");
    while(spaceIndex!=-1){
       
        str.replace(spaceIndex,1,"%20");
         spaceIndex = str.find(" ");
    }
    return str;
}

int main()
{
   cout << "Hello World" << endl; 
   string str;
   cout<<"Enter string : ";
   
   getline(cin,str);
   replaceSpaces(&str);
    cout<<"String issss : "<<str<<endl;
   return 0;
}


