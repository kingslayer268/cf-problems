#include <bits/stdc++.h>
using namespace std;

int time(int h1, int h2, int n) {
	if (h1 <= h2) {
		return h2-h1;
	}
	else return h2-h1+n;
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> M;
	M.push_back(1);
	long long t = 0;
	for (int i=1; i<m+1; i++) {
		int mi;
		cin >> mi;
		M.push_back(mi);
		t += time(M[i-1], mi, n);
	}
	cout << t;
}
