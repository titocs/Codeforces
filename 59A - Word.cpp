// Link problem: https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int upper = 0, lower = 0;
    for(int i=0; i<s.length(); ++i){
        if(s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else
            lower++;
    }
    if(upper > lower){
        for_each(s.begin(), s.end(), [](char & c){
            c = ::toupper(c);
        });
        cout << s;
    }
    else{
        for_each(s.begin(), s.end(), [](char & c){
            c = ::tolower(c);
        });
        cout << s;
    }
}
