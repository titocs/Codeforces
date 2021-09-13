// Link problem: https://codeforces.com/contest/1566/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n, s;
        cin >> n >> s;
        int cnt = n / 2 + 1;
        cout << s / cnt << '\n';
    }
}
