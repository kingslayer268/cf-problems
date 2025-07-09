#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
	string ans;
	for (int i=0; i<str.size(); i++) {
		if (vowels.find(tolower(str[i])) == vowels.end()) {
			ans.push_back('.');
			ans.push_back(tolower(str[i]));
		}
	}
	cout << ans;
}

	
