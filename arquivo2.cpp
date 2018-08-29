#include <iostream>
#include <string>

int main()
{
    std::string result;
    std::cin >> std::noskipws; //don't skip whitespaces
    char c;
    while (std::cin >> c)
    {
        if(c == '\t' || c == ' ')
             break;
        result.push_back(c);
    }

}

