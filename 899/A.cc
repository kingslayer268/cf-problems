#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    for (int j=0; j<t; j++){
        int n;
        scanf("%d", &n);
        vector<int> a;
        vector<int> b;
        for (int i=0; i<n; i++){
            int ai;
            scanf("%d", &ai);
            a.push_back(ai);
        }
        int last_added = 0;
        for (int i=0; i<n; i++){
            if (i == 0){
                if (a[i] == 1){
                    b.push_back(2);
                    last_added = 2;
                } else {
                    b.push_back(1);
                    last_added = 1;
                }
            } else {
                if (a[i] == last_added+1){
                    b.push_back(a[i]+2);
                    last_added += 2;

                } else {
                    b.push_back(a[i]+1);
                    last_added = last_added + 1;
                }
            }
        }
        printf("%d\n", last_added);
    }
}
