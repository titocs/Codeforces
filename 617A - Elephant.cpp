// Link problem: https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    if(n <= 5)
        cout << "1";
    else{
        int it = 5;
        while(n > 0){
            if(n - it >= 0){
                n -= it;
                count++;
            }
            else{
                it--;
            }
        }
        cout << count;
    }
}
