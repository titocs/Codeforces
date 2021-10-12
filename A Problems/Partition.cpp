// Link problem: https://codeforces.com/problemset/problem/946/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int positif = 0, negatif = 0;
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if(arr[i] > 0)
            positif += arr[i];
        else if(arr[i] < 0)
            negatif += arr[i];
    }
    cout << positif - negatif;
}
