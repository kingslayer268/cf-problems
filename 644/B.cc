#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int j = n;
		vector<int> a;
		while (j--) {
			int ai; cin >> ai;
			a.push_back(ai);
		}
		sort(a.begin(), a.end());
		int min_diff = INT_MAX;
		for (int i=1; i<n; i++) 
			min_diff = min(min_diff, abs(a[i]-a[i-1]));
		cout << min_diff << "\n";
	}
}
