#include <bits/stdc++.h>

int main(){
	int N, k;
	std::cin >> N >> k;
	k--;
	std::vector<int> A(N, 0);
	int t = 0;

	for (int i=0; i<N; i++){
		int ai;
		std::cin >> ai;
		A[i] = ai;
	}
	for (int i=0; i<N; i++){
		if (A[i] >= A[k] && A[i] > 0){
			t++;
		}
	}
	std::cout << t;
}
