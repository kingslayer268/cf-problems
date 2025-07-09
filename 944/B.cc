#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x,y) << "\n";
    }
}