// Link problem: https://codeforces.com/problemset/problem/1220/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    sort(s.begin(), s.end());
    for(int i=0; i<s.length(); ++i){
        if(s[i] == 'z') cout << "0" << " ";
        else if(s[i] == 'n') cout << "1" << " ";
    }
}
