// Link problem: https://codeforces.com/problemset/problem/271/A
 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(true){
        n += 1;
        int temp1 = n / 1000;
        int temp2 = n / 100 % 10;
        int temp3 = n / 10 % 10;
        int temp4 = n % 10;
        if (temp1 != temp2 && temp1 != temp3 && temp1 != temp4 &&
            temp2 != temp3 && temp2 != temp4 && temp3 != temp4)
            break;
    }
    cout << n;
}
