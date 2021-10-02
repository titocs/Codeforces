// Link problem: https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n < 3) cout << 0 << '\n';
        else{
            cout << (n - 1)/2 << '\n';
        }
    }
}
