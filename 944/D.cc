#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char last = s[0];
        int count = 0;
        bool zero_one_follow = false;
        for (int i = 0; i< s.length()-1; i++){
            if (s[i] == '0' && s[i+1] == '1') zero_one_follow = true;
        }
        for (int i=1; i<s.length(); i++){
            if (s[i] != last){
                last = s[i];
                count++;
            }
        }
        if (zero_one_follow){
            cout << max(count, 1) << "\n";
        }
        else {
            cout << max(count+1, 1) << "\n";
        }
    }
}