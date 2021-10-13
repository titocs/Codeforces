// Link problem: https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int menang = 0, kalah = 0;
    while(n--){
        int x, y; cin >> x >> y;
        if(x > y) menang++;
        else if(x < y) kalah++;
    }
    if(menang > kalah)
        cout << "Mishka";
    else if(menang < kalah)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}
