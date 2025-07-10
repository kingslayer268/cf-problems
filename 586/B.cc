#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin >> n;
	long long a[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	long long b[n];
	b[0] = sqrt((a[0][1]*a[0][2]/a[1][2]));
	cout << b[0] << " ";
	for (int i=1; i<n; i++) {
		b[i] = a[i-1][i]/b[i-1];
		cout << b[i] << " ";
	}
}
