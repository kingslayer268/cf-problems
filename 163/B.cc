#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	string str;
	cin >> str;
	while (t > 0){
		for (int i=0; i<n-1; i++) {
			if (str[i] == 'B' && str[i+1] == 'G') {
				str[i] = 'G';
				str[i+1] = 'B';
				i++;
			}
		}
		t--;
	}
	cout << str;
}
