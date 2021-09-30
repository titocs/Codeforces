// Link problem: https://codeforces.com/problemset/problem/707/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    bool ok = false;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            char s; cin >> s;
            if( s == 'Y' || s == 'M' || s == 'C'){
                ok = true;
            }
        }
    }
    cout << (ok ? "#Color" : "#Black&White");
}
