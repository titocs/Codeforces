// Link problem:

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    for_each(a.begin(), a.end(), [](char & c){
        c = ::tolower(c);
    });
    for_each(b.begin(), b.end(), [](char & c){
        c = ::tolower(c);
    });
    if(a == b)
        cout << "0";
    else if(a < b)
        cout << "-1";
    else
        cout << "1";
}
