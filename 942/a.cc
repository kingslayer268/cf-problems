#include<bits/stdc++.h>
using namespace std;
int a[105];
int b[105];
int main(){
    int t;
    cin >> t;
    for (int i = 0; i<t; i++){
        int n;
        cin >> n;
        for (int j = 0; j<n; j++){
            cin >> a[j];
        }
        for (int j=0; j<n; j++){
            cin >> b[j];
        }
        int diff = 0;
        int ans = 0;
        for (int j=0; j<n; j++){
            if (a[j-diff] > b[j]){
                ans++;
                diff++;
            }
        }
        cout << ans <<"\n";
    }
}

