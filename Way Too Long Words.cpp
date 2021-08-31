// Link problem: https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string s;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> s;
        if(s.length() <= 10)
            cout << s << endl;
        else{
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }
}
