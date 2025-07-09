#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<int, long long> cnt;
	unordered_map<int, long long> ans;
	int N;
	cin >> N;
	int mx = 0;
	for (int i=0; i<N; i++) {
		int a;
		cin >> a;
		cnt[a]++;
		if (a>mx) mx = a; 
	}
	ans[0] = 0;
	ans[1] = cnt[1];
	for (int i=2; i<=mx; i++) {
		ans[i] = max(ans[i-1], ans[i-2]+(i*cnt[i]));
	}
	cout << ans[mx];
}
	
