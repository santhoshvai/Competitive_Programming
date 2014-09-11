#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <vector>

std::vector <std::string> splitString(char* str){
  char * pch;
  std::vector <std::string> equation;
  pch = strtok (str," +="); // (string and delimiters)
  while (pch != NULL)
  {
    equation.push_back(pch); 
    pch = strtok (NULL, " +="); // NULL means start from previous successfull point
  }
  return equation;
}
int str2int(std::string myString){
	return atoi(myString.c_str());
}
int main ()
{
  int noOfCases;
  int a,b;
  scanf("%d\n\n",&noOfCases);
  std::string str;
  while(noOfCases--){
  	getline(std::cin, str);
    scanf("\n");
  	std::vector <std::string> equation = 
  		splitString(const_cast<char*>(str.c_str()));
  	/* 
  	str.c_str() returns const char* of the string
  	const_cast<char*> returns char* of const char*
  	*/
     if(equation[0].find("m") != -1)
        {
            a = str2int(equation[1]);
            b = str2int(equation[2]);
            std::cout<<b-a<<" + "<<a<<" = "<<b<<std::endl;
        }
        else if(equation[1].find("m") != -1)
        {
            a = str2int(equation[0]);
            b = str2int(equation[2]);
            std::cout<<a<<" + "<<b-a<<" = "<<b<<std::endl;
        }
        else if(equation[2].find("m") != -1)
        {
            a = str2int(equation[0]);
            b = str2int(equation[1]);
            std::cout<<a<<" + "<<b<<" = "<<a+b<<std::endl;
        }
        else
        {
            std::cout<<str<<std::endl;
        }
  }
  return 0;
}
