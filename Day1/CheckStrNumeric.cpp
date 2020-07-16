
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


bool checkStrNumeric(const std::string &str)
{
    int i;
    if(str.find_first_not_of("0123456789") == std::string::npos){
         i =1;
        return i;
    }else{
        i=0;
        return 0;
    }
}
