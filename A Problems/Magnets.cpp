// Link problem: https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    string temp = arr[0];
    for(int i=0; i<n; ++i){
        if(arr[i] == temp){
            count++;
            reverse(temp.begin(), temp.end());
        }
        else continue;
    }
    cout << count;
}
