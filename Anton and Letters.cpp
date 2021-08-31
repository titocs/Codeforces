// Link problem: https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int letter[26] = {0};
    int count = 0;
    for(int i=0; i<s.length(); ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            letter[s[i] - 'a']++;
            if(letter[s[i] - 'a'] > 1)
                continue;
            count++;
        }
    }
    cout << count;
}
