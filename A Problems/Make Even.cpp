// Link problem: https://codeforces.com/problemset/problem/1611/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int indeks;
        string s; cin >> s;
        bool genap = false;
        for(int i=0; i<s.length(); ++i){
            if((s[i] - '0')%2 == 0){
                genap = true;
                indeks = i;
                break;
            }
        }
        if(genap){
            if((s[s.length()-1] - '0')%2 == 0)
                cout << 0 << endl;
            else if(indeks == 0) cout << 1 << endl;
            else if(indeks > 0 && indeks < s.length()-1)
                cout << 2 << endl;
        }
        else cout << -1 << endl;
    }
}
