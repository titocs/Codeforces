// Link problem: https://codeforces.com/problemset/problem/510/A


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int temp = 1;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=m; ++j){
            if(i % 2 != 0)
                cout << "#";
            else{
                if(temp % 2 != 0)
                    cout << (j != m ? "." : "#");
                else
                    cout << (j == 1 ? "#" : ".");
            }
        }
        if(i % 2 == 0)
            temp++;
        cout << '\n';
    }
}
