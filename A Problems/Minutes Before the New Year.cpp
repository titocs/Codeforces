// Link problem: https://codeforces.com/problemset/problem/1283/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int a, b;
        cin >> a >> b;
        cout << ((24 - a)*60) - b << '\n';
    }
}
