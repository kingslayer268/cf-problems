#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	double rate_a = (double) a;
	double rate_b = (double) b / m;

	if (rate_a <= rate_b) {
		cout << n*a;
	}
	else {
		int t = (n/m);
		t = t*b;
		int rem = n%m;
		rem = rem*a;
		cout << min(t+rem, t+b);
	}
}

