// Link problem: https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    double res;
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        res += x;
    }
    cout << fixed << setprecision(12) << res/n;
}
