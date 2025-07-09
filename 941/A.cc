#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
int main(){
    int t, n, k;
    cin >> t >> n >> k;
    if (k>n){
        cout << 1 << endl;
        exit(0);
    }
    vector<int> cards(n);
    for int (i = 0; i < n; i++){
        cin >> cards[i];
    }
    sort(cards.begin(), cards.end());
    for (int i = 0; i < n; i++){
        if (cards[i] == k){
            cout << i+1 << endl;
            exit(0);
        }
    }

}