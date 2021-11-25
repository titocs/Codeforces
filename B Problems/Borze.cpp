// Link problem: https://codeforces.com/problemset/problem/32/B


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    string res = "";
    for(int i=0; i<s.length(); ++i){
        if(s[i] == '.')
            res += "0";
        else if(s[i] == '-'){
            if(s[i+1] == '-'){
                res += "2";
                i++;
            }
            else{
                res += "1";
                i++;
            }
        }
    }
    cout << res;
}
