// Link problem: https://codeforces.com/contest/1556/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int c, d;
        cin >> c >> d;
        if(abs(c - d) % 2 == 1)
            cout << "-1" << '\n';
        else if(c == 0 && d == 0)
            cout << "0" << '\n';
        else if(c == d)
            cout << "1" << '\n';
        else
            cout << "2" << '\n';
    }
}
