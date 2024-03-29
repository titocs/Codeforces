// Link problem: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int count = 0;
    while(n != 0){
        if(n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }
    cout << (count == 4 || count == 7 ? "YES" : "NO");
}
