// Link problem: https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(3);
    for(int i=0; i<3; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << (abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]));
}
