// Link problem: https://codeforces.com/problemset/status?my=on

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int count_maks = 0;
        vector<int> arr(3);
        for(int i=0; i<3; ++i){
            cin >> arr[i];
        }
        int maks = *max_element(arr.begin(), arr.end());
        if(maks == 0)
            cout << 1 << " " << 1 << " " << 1 << endl;
        else{
            int lok;
            for(int i=0; i<3; ++i){
                if(arr[i] == maks){
                    count_maks++;
                    lok = i;
                }
            }
            for(int i=0; i<3; ++i){
                if(i == lok && count_maks == 1)
                    cout << 0 << " ";
                else if(i == lok && count_maks == 2){
                    if(arr[i] == maks)
                        cout << (maks + 1) - arr[i] << " ";
                }
                else cout << (maks + 1) - arr[i] << " ";
            }
            cout << endl;
        }
    }
}
