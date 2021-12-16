#include <iostream>
#include <string>

std::string comp(const std::string&);
int main()
{
	std::string str{ "aabcccccaaa" };
	std::cout << "Compressed String  "<<comp(str);
}

std::string comp(const std::string& s)
{
	char nax = s[0];
	std::string n{};
	int count = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == nax)
		{
			count++;
		}
		else
		{
			n += nax + std::to_string(count);
			nax = s[i];
			count = 1;
		}
	}
	n += nax + std::to_string(count);
        s=n;
	return s;
}