// Link problem: https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, count = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}
