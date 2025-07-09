#include <bits/stdc++.h>
using namespace std;

int calc(long long n) {
	int cnt_2=0, cnt_3=0;
	while (n%2 == 0) {
		n = n/2;
		cnt_2++;
	}
	while (n%3 == 0) {
		n = n/3;
		cnt_3++;
	}
	if (n > 1 || cnt_2 > cnt_3) return -1;
	else return (cnt_3 - cnt_2) + cnt_3;
}
int main() {
	int t;
	cin >> t;
	long long n;
	for (int i=0; i<t; i++) {
		cin >> n;
		cout << calc(n) << "\n";
	}
}
