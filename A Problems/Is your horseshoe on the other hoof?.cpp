// Link problem: https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(4);
    int count = 0;
    for(int i=0; i<4; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=1; i<4; ++i){
        if(arr[i] == arr[i-1])
            count++;
    }
    cout << count;
}
