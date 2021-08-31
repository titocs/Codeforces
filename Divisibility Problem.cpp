// Link problem : https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, b, res;
    cin >> n;
    while(n--){
        cin >> a >> b;
        res = a % b == 0 ? 0 : b - (a % b);
        cout << res << endl;
    }
}
