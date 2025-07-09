#include <bits/stdc++.h>

int main(){
	int N;
	int t = 0;
	std::cin >> N;
	for (int i=0; i<N; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;
		if ((a+b+c) > 1){
			t++;
		}
	}
	std::cout << t;
}
