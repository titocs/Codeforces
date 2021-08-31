// Link problem: https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<char> temp;
    for(int i=0; i<s.length(); ++i){
        if(s[i] == '+')
            continue;
        else
            temp.push_back(s[i]);
    }
    sort(temp.begin(), temp.end());
    int j = 0;
    for(int i=0; i<s.length(); ++i){
        if(i % 2 != 0)
            cout << "+";
        else{
            cout << temp[j];
            ++j;
        }
    }
}
