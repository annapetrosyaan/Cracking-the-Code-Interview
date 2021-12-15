#include <iostream>
#include <string>

std::string down(std::string);
bool unique(const std::string&);

int main() {
	std::string str= "unique charactEr";
	std::cout<<unique(str);
}

std::string down(std::string str)
{
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] <= 'A' && str[i] >= 'Z') {
			str[i] -= 32;
		}
	}
	return str;
}


bool unique(const std::string& str)
{
	std::string st = down(str);
	int check = 0;
	for (int i = 0; i < st.size(); ++i) {
		int index = st[i] - 'a';
		if ((check & (1 << index)) > 0) {
			return false; //arden ka checki mej bity false kta:
		}
		else {
			check = check | (1 << index); //ete chka bity checki mej qcel
		}
	}
	return true;
}