// Link problem : https://codeforces.com/problemset/problem/236/A


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s;
    int panjang = s.length();
    sort(s.begin(), s.end());
    for(int i=0; i<panjang; ++i){
        if(s[i] != s[i+1])
            count++;
    }
    if(count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
