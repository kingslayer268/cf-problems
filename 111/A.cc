#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	int sum = 0;
	for (int i =0; i<n; i++){
		int ai;
		cin >> ai;
		a.push_back(ai);
		sum += ai;
	}
	sort(a.begin(), a.end(), [](const int a, const int b) {return a>b;});
	int sum_1 = 0, sum_2 = sum;

	for (int i=0; i<n; i++) {
		sum_1 += a[i];
		sum_2 -= a[i];
		if (sum_1 > sum_2) {
			cout << i+1;
			break;
		}
	}
}
