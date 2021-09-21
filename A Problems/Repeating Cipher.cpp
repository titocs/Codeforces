// Link problem: 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int temp = 0;
    for(int i=0; i<s.length(); ++i){
        cout << s[i];
        i += temp;
        temp++;
    }
}
