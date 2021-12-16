#include <iostream>
bool oneaway(std::string, std::string);
int main()
{
   std::string s1 = "pale";
   std::string s2 = "ple";
    std::cout << oneaway(s1, s2);
    return 0;
}

bool oneaway(std::string s1, std::string s2)
{
    int count{}, i{}, j{};
    int m = s1.size(), n = s2.size();
    if (abs(m - n) > 1)
    {
        return false;
    }
    while (i < m && j < n)
    {
        if (s1[i] != s2[j])
        {
            if (count == 1) { return false; }
            if (m > n) { i++; }
            else if (m < n) { j++; }
            else
            {
                i++;    j++;
            }
            count++;
        }
        else {
            i++;
            j++;
        }
    }
    if (i < m || j < n)
        count++;
    return count == 1;
}
