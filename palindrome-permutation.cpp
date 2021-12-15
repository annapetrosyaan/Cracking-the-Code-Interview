#include <iostream>
#include <string>
#include <vector>
std::string del(std::string&);
std::string up(std::string&);
bool check(std::string&);
int main()
{
	std::string str = "Tact Coa";
	str=up(str);
	std::cout << check(str);
}

std::string up(std::string &str) {
	int count = 0;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == ' ') {
			count++;
			str.erase(i,count);
		}
		 else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	return str;
}

bool check( std::string &st)
{

	std::vector<char> vec;
	for (int i = 0; i < st.size(); ++i)
	{
		auto ind = find(vec.begin(), vec.end(), st[i]);
		if (ind != vec.end()) {
			auto it = find(vec.begin(), vec.end(), st[i]);
			vec.erase(it);
		}
		else { vec.push_back(st[i]); }
	}

		if (st.size() % 2 == 0 && vec.empty() || (st.size() % 2 == 1 && vec.size() == 1)) 
		{
			return true;
	}
		else { return false; }
	
}