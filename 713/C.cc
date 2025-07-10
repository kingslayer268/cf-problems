#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		string s;
		cin >> s;
		int n = a + b;

		int cnt0 = count(s.begin(), s.end(), '0');
		int cnt1 = count(s.begin(), s.end(), '1');
		a -= cnt0;
		b -= cnt1;

		bool bad = false;

		for (int i = 0; i < n/2; i++) {
			int j = n - i - 1;
			if (s[i] != '?' && s[j] == '?') {
				s[j] = s[i];
				if (s[i] == '0') a--;
				else b--;
			} else if (s[i] == '?' && s[j] != '?') {
				s[i] = s[j];
				if (s[j] == '0') a--;
				else b--;
			} else if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
				bad = true;
			}
		}

		if (n % 2 == 1 && s[n/2] == '?') {
			if (a % 2 == 1) {
				s[n/2] = '0';
				a--;
			} else {
				s[n/2] = '1';
				b--;
			}
		}

		for (int i = 0; i < n/2; i++) {
			int j = n - i - 1;
			if (s[i] == '?' && s[j] == '?') {
				if (a >= 2) {
					s[i] = s[j] = '0';
					a -= 2;
				} else if (b >= 2) {
					s[i] = s[j] = '1';
					b -= 2;
				} else {
					bad = true;
					break;
				}
			}
		}

		if (a < 0 || b < 0 || bad) {
			cout << -1 << "\n";
		} else {
			cout << s << "\n";
		}
	}
}

