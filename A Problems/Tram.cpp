// Link problem: https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int count = 0, maks = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        count -= a;
        count += b;
        maks = max(maks, count);
    }
    cout << maks;
}
