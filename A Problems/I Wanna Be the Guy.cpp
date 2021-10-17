// Link problem: https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    int p; cin >> p;
    vector<int> arr;
    for(int i=0; i<p; ++i){
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    int q; cin >> q;
    for(int i=0; i<q; ++i){
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<p+q ; ++i){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    cout << (n == count ? "I become the guy." : "Oh, my keyboard!");
}
