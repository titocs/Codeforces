// Link problem: https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int hasil = 0;
    int counter = 1, res = 0, temp = n;
    for(int i=1; i<=n; ++i){
        res += counter;
        counter++;
        if(temp - res < 0)
            break;
        else{
            temp -= res;
            hasil++;
        }
    }
    cout << hasil;
}
