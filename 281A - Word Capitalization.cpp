// Link problem: https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    char temp = toupper(s[0]);
    s = s.erase(0, 1);
    cout << temp << s;
}
