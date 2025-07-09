#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int count=0;
	int k=0;
	while (n>0) {
		int j = n%10;
		n = n/10;
		if (j==7 || j==4) count++;
		k++;
	}
	if (count == 4 || count == 7) cout << "YES";
	else cout << "NO";
}
