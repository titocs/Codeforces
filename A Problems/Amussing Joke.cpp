// Link problem: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c;
    int count[91] = {0}; int temp[91] = {0};
    bool ok = false;
    cin >> a >> b >> c;
    for(int i=0; i<a.length(); ++i){
        count[a[i]]++;
    }
    for(int i=0; i<b.length(); ++i){
        count[b[i]]++;
    }
    for(int i=0; i<c.length(); ++i){
        temp[c[i]]++;
    }
    for(int i=0; i<91; ++i){
        if(temp[i] != count[i]){
            ok = true;
        }
    }
    cout << (ok ? "NO" : "YES");
}
