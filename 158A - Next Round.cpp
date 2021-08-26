// Link problem: https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0, cek = 0, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i){
        if(arr[i] >= arr[k-1] && arr[i] > 0)
            count++;
    }
    cout << count;
    
}
