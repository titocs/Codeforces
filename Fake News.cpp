// Link problem: https://codeforces.com/problemset/problem/802/G

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s; cin >> s;
    string temp = "heidi";
    int j = 0;
    for(int i=0; i<s.length(); ++i){
        if(s[i] == temp[j]){
            j++;
        }
    }
    cout << (j >= 5 ? "YES" : "NO");
}
