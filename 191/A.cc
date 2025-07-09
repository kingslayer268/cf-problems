#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i=0; i<n; i++) {
		int ai;
		cin >> ai;
		if (ai == 0) a.push_back(1);
		else a.push_back(-1);
	}
	vector<int> prefix;
	prefix.push_back(a[0]);
	for (int i=1; i<n; i++) prefix.push_back(a[i] + prefix[i-1]);
	for (int i=0; i<n; i++) cout << prefix[i];
}
