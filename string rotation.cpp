#include <iostream>
#include <string>

bool issub(std::string, std::string);
int main() {

	std::string s{ "waterbottle" };
	std::string d{ "erbottylewat" };
	std::cout << issub(s, d);

}

bool issub(std::string s, std::string d)
{
	if (s.size() != d.size()) { return false; }
	if (s == d) { return true; }
	for (int i = 0; i < s.size(); ++i) {
		d.push_back(d[0]);
		d.erase(d.begin());
		if (d == s) {
			return true;
		}
	}
	return false;
}