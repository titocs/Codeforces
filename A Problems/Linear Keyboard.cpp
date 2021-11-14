// Link problem: https://codeforces.com/problemset/problem/1607/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int count = 0;
        string abjad, s;
        vector<int> nilai;
        cin >> abjad >> s;
        for(int i=0; i<s.length(); ++i){
            int ans = abjad.find(s[i]);
            nilai.push_back(ans + 1);
        }
        for(int i=1; i<nilai.size(); ++i){
            count += abs(nilai[i] - nilai[i-1]);
        }
        cout << count << endl;
    }
    return 0;
}
