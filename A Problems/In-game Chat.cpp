// Link problem: https://codeforces.com/problemset/problem/1411/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x, count = 0;
        cin >> x;
        string s; cin >> s;
        for(int i=s.length()-1; i>=0; --i){
            if(s[i] == ')')
                count++;
            else if(s[i] != ')')
                break;
        }
        s = s.erase(s.length() - count, count);
        cout << (count > s.length() ? "YES" : "NO") << '\n';
    }
}
