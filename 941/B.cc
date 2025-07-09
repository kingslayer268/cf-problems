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
    int t;
    cin >> t;
    for (int p=0; p<t; p++){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> rectangle;
        for (int j=0; j<n; j++){
            vector<int> row;
            for (int l=0; l<m; l++){
                char x;
                cin >> x;
                row.push_back(x);
            }
            rectangle.push_back(row);
        }
        if (rectangle[0][0] == rectangle [n-1][m-1]){
            cout << "YES" << endl;
            continue;
        }
        bool found_r = false; bool found_c = false;
        for (int i=0; i<m; i++){
            if (rectangle[0][i] == rectangle[n-1][m-1]){
                found_r = true;
            }
        }
        for (int i=0; i<n; i++){
            if (rectangle[i][0] == rectangle[n-1][m-1]){
                found_c = true;
            }
        }
        if (found_r && found_c){
            cout << "YES" << endl;
            continue;
        }
        bool found_r1 = false; bool found_c1 = false;
        for (int i=0; i<m; i++){
            if (rectangle[n-1][i] == rectangle[0][0]){
                found_r1 = true;
            }
        }
        for (int i=0; i<n; i++){
            if (rectangle[i][m-1] == rectangle[0][0]){
                found_c1 = true;
            }
        }
        if (found_r1 && found_c1){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}