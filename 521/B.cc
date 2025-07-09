#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i=0; i<n; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}
	int k = 0;
	for (int i=1; i<n-1; i++) {
		if (a[i-1] == 1 && a[i] == 0 && a[i+1] == 1) {
			a[i+1] = 0;
			k++;
		}
	}
	cout << k;
}
