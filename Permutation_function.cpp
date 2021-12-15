#include  <iostream>
#include <set>
#include <string>

bool perm(const std::string&, const std::string&);
int main()
{
	std::string str = "tac";
    std::string str1 = "cat";
	std::cout << perm(str, str1);
}

bool perm(const std::string& first, const std::string& sec) {
	if (first.size() != sec.size()) 
	{
		return false;
	}
	std::set<char>f(begin(first), end(first));
	std::set<char>s(begin(sec), end(sec));
	if (f == s) { return true; }

}