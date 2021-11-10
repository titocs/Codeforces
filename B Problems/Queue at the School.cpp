// Link problem: https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--){
        for(int i=1; i<n; ++i){
            if(s[i] == 'G' && s[i-1] == 'B'){
                swap(s[i], s[i-1]);
                i++;
            }
        }
    }
    cout << s;
}
