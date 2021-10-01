// Link problem: https://codeforces.com/problemset/problem/677/A?csrf_token=b4bc3bc7635b5929039a65e15e0a3d5d

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h; cin >> n >> h;
    int count = 0;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        (arr[i] <= h ? count++ : count += 2);
    }
    cout << count;
}
