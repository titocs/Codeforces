// Link problem: https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int temp = n;
        temp /= 2;
        if(temp % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int genap = 2, ganjil = 1;
            int tot_genap = 0;
            for(int i=0; i<n/2; ++i){
                cout << genap << " ";
                genap += 2;
                tot_genap += genap;
            }
            int counter = 0, tot_ganjil = 0;
            for(int i=0; i<n/2; ++i){
                cout << ganjil << " ";
                counter++;
                ganjil += 2;
                tot_ganjil += ganjil;
                if(counter == n/2 - 1){
                    cout << (tot_genap - tot_ganjil) - 2;
                    break;
                }
            }
            cout << endl;
        }
    }
}
