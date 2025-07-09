#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;


int main() {
	int n;
	string str;
	cin >> n;
	cin >> str;
	set<char> letters;
	for (int i = 0; i < n; i++)	letters.insert(tolower(str[i]));
	if (letters.size() >= 26) cout << "YES";
	else cout << "NO";
}
