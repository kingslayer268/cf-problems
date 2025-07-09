#include <bits/stDc++.h>
using namespace std; 

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int start = min(a, b);
        int end = max(a, b);
        int count = 0;
        for (int i = start; i<end+1; i++){
            if (i == c || i == d) count++;
        }
        if (count == 0 || count == 2) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}