// Example program
#include <iostream>
#include <string>


bool isSubString(std::string str,std::string substr)
{
    return ((str.find(substr) == -1)?false:true);
}

bool isRotated(std::string str1,std::string str2)
{
    //return true
    if(str2.length()!=str1.length)
    return false;
    bool isRotated = false;
    for(int i = 0;i<str1.length();i++)
    {
      isRotated = isSubString (str1,str2.substr(0,i)) &&  isSubString (str,str2.substr(i,str2.length()-i)); 
        if(isRotated)
            return true;
    }
    return isRotated
    
}

int main()
{
  std::string str,substr;
  
  std::cout << "Enter string ";
  getline(std::cin,str);
  
  std::cout << "Enter substring ";
  getline(std::cin,substr);
  
  bool issubstr = isSubString(str,substr);
  return 0;
}
