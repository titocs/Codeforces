// Link problem: https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=1; i<=n; ++i){
        if(i % 2 == 0){
            cout << "I love ";
            cout << (i == n? "it " : "that ");
        }
        else{
            cout << "I hate ";
            cout << (i == n? "it " : "that ");
        }
    }
}
