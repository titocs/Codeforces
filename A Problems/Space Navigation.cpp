// Link problem : 

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    while(n--){
        int a, b, r = 0, u = 0, d = 0, l = 0;
        cin >> a >> b;
        string s; cin >> s;
        if(a > 0 && b > 0){
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'R'){
                    r++;
                    if(r == a)
                        break;
                }
            }
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'U'){
                    u++;
                    if(u == b)
                        break;
                }
            }
            cout << (r == a && u == b ? "YES" : "NO") << endl;
        }
        else if(a > 0 && b < 0){
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'R'){
                    r++;
                    if(r == a)
                        break;
                }
            }
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'D'){
                    d--;
                    if(d == b)
                        break;
                }
            }
            cout << (r == a && d == b ? "YES" : "NO") << endl;
        }
        else if(a < 0 && b < 0){
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'L'){
                    l--;
                    if(l == a)
                        break;
                }
            }
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'D'){
                    d--;
                    if(d == b)
                        break;
                }
            }
            cout << (l == a && d == b ? "YES" : "NO") << endl;
        }
        else if(a < 0 && b > 0){
            for(int  i=0; i<s.length(); ++i){
                if(s[i] == 'L'){
                    l--;
                    if(l == a)
                        break;
                }
            }
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'U'){
                    u++;
                    if(u == b)
                        break;
                }
            }
            cout << (l == a && u == b ? "YES" : "NO") << endl;
        }
        else if(a == 0 && b > 0){ // x positif, y positif
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'U'){
                    u++;
                    if(u == b)
                        break;
                }
            }
            cout << (u == b ? "YES" : "NO") << endl;
        }
        else if(a > 0 && b == 0) {
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'R'){
                    r++;
                    if(r == a)
                        break;
                }
            }
            cout << (r == a ? "YES" : "NO") << endl;
        }
        else if(a < 0 && b == 0){
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'L'){
                    l--;
                    if(l == a)
                        break;
                }
            }
            cout << (l == a ? "YES" : "NO") << endl;
        }
        else if(a == 0 && b < 0){
            for(int i=0; i<s.length(); ++i){
                if(s[i] == 'D'){
                    d--;
                    if(d == b)
                        break;
                }
            }
            cout << (d == b ? "YES" : "NO") << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
