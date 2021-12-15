#include <iostream>
#include <string>


std::string rem(const std::string& s)
{
    int last = s.size() - 1;
    while (last >= 0 && s[last] == ' ')
    {
        --last;
    }
    return s.substr(0, last + 1);
}

std::string foo( std::string str)
{
    std::string s=rem(str);
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s.size() - 1 == 32)
            count++;
   }

    std::string nor = "%20";
    for (int i = 0; i < str.size(); ++i) {
        if (s[i] == ' ')
        {
            s.replace(i, 1, nor);
        }
    }
    return s;
}




int main()
{
    std::string s = "Mr John Smith  ";
    std::cout << foo(s);

}