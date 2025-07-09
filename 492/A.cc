#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N;
	cin >> N;
	long long doms[5] = {100, 20, 10, 5, 1};
	long long ans = 0;
	for (int i=0; i<5; i++) {
		long long a = N/doms[i];
		ans += a;
		N = N%doms[i];	
	}
	cout << ans;
}
