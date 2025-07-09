#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	int max_freq = 0;
	string max_twogram;
	string s;
	unordered_map<string, int> freqs;
	cin >> N;
	cin >> s;
	for (int i=0; i<N-1; i++){
		string subs = s.substr(i, 2);
		if (freqs.find(subs) != freqs.end()) {
			freqs[subs] += 1;
		}
		else {
			freqs[subs] = 1;
		}
		if (freqs[subs] > max_freq) {
			max_freq = freqs[subs];
			max_twogram = subs;
		}
	}
	cout << max_twogram;

}
