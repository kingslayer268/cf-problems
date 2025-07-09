#include <bits/stdc++.h>
using namespace std;

int search(int q, const vector<int> &a) {
	int low = 0;
	int high = a.size()-1;
	int ans = -1;
	while (high>=low) {
		int mid = (high+low)/2;
		if (a[mid] >= q) {
			high = mid-1;
		}
		else {
			low = mid + 1;
			ans = mid;
		}
	}
	return ans+2;
}

int main() {
	int n;
	vector<int> a;
	cin >> n;
	int m;
	vector<int> q;
	for (int i=0; i<n; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}
	cin >> m;
	for (int i=0; i<m; i++) {
		int qi;
		cin >> qi;
		q.push_back(qi);
	}
	vector<int> prefix;
	prefix.push_back(a[0]);
	for (int i=1; i<n; i++) {
		prefix.push_back(a[i]+prefix[i-1]);
	}

	for (int i=0; i<m; i++) {
		int ans = search(q[i], prefix);
		cout << ans << endl;
	}
}
