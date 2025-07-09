#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> a;
	for (int i=0; i<n; i++) {
		long long ai;
		cin >> ai;
		a.push_back(ai+n);
	}
	vector<long long> lowest;
	long long mn = 10e9;
	int mn_ind = 0;
	for (int i=0; i<n; i++) {
		long long t = (a[i] - i)/n;
		if ((a[i]-i)%n != 0) t++;
		long long li = t*n+i;
		if (li <= mn) {
			mn_ind = i;
			mn = li;
		}
	}
	cout << mn_ind+1;
}
