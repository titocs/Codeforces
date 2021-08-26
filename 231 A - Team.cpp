#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    while(n--){
        int p, q, r;
        cin >> p >> q >> r;
        if(p + q + r >= 2)
            count++;
    }
    cout << count;
}
