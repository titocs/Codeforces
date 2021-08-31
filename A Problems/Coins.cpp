// Link problem: https://codeforces.com/problemset/problem/1061/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s, count = 0, total = 0;
    cin >> n >> s;
    while(s != 0){
        if(s - n < 0) n--;
        else{
            s -= n;
            count++;
        }
    }
    cout << count;
}
