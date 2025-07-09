#include <bits/stdc++.h>
#include <ctype.h>

int main(){
	std::string s;
	std::cin >> s;
	std::string s1 = s.substr(1);
	char c = s[0];
	c = toupper(c);
	s.clear();
	s.push_back(c);
	s.append(s1);
	std::cout << s;
}
