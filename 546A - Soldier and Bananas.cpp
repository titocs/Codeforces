// Link problem:

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int k, n, w, count = 0;
    cin >> k >> n >> w;
    for(long int i=1; i<=w; ++i){
        count += k*i;
    }
    cout << (count >= n ? count - n : "0");
}
