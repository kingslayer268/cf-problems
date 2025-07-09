#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main(){
    int t; cin >> t;
    while (t--){
        long double r;
        cin >> r;
        if (isPerfectSquare(r+1)){
            cout << (int)r*2*4 - 4;
        }
        else {
            cout << (int)r*2*4;
        }
        cout << "\n";
    }
}