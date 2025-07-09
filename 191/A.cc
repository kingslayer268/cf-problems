#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	int cnt=0;
	for (int i=0; i<n; i++) {
		int ai;
		cin >> ai;
		if (ai == 1) {
			cnt++;
			a.push_back(-1);
		}
		else {
			a.push_back(1);
		}
	}
	int sum = 0;
	int maxi = INT_MIN;
	for (int i=0; i<n; i++) {
		sum += a[i];
		maxi = max(sum, maxi);
		if (sum < 0) {
			sum = 0;
		}
	}
	cout << cnt + maxi;
}
