// Link problem: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << (n % 2 == 0? n/2 : (-n/2) - 1);
}
