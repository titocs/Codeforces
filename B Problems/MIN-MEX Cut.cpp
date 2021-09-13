// Link problem: https://codeforces.com/contest/1566/problem/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        string s; cin >> s;
        int k0 = 0, k1 = 0, first = -1, last = -1;
        int n = s.size();
        for(int i=0; i<n; ++i){
            if(s[i] == '0'){
                if(first == -1)
                    first = i;
                last = i;
                k0 += 1;
            }
            else k1 += 1;
        }
        if(k0 == 0){
            cout << 0 << '\n';
            continue;
        }
        if(last - first + 1 == k0){
            cout << 1 << '\n';
            continue;
        }
        cout << 2 << '\n';
    }
}
