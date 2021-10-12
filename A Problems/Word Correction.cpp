// Link problem: https://codeforces.com/problemset/problem/938/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i=1; i<s.length(); ++i){
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' ||
           s[i] == 'e' || s[i] == 'o' || s[i] == 'y'){
               if(s[i-1] == 'a' || s[i-1] == 'i' || s[i-1] == 'u'
                  || s[i-1] == 'e' || s[i-1] =='o' || s[i-1] =='y'){
                      s = s.erase(i, 1);
                      i--;
                  }
           }
    }
    cout << s;
}
