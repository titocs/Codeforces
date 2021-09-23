// Link problem: https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    int temp = 0;
    string res = "";
    for(int i=0; i<s2.length(); ++i){
        if(s1[i] == '1' && s2[i] == '0' || s1[i] == '0' && s2[i] == '1')
            res += "1";
        else if(s1[i] == '1' && s2[i] == '1')
            res += "0";
        else
            res += "0";
        temp++;
    }
    cout << res;
}
