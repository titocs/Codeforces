// Link problem: https://codeforces.com/contest/711/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bool ok = false;
    int n; cin >> n;
    vector<int> temp;
    char arr[n][5];
    for(int i=0; i<n; ++i){
        for(int j=0; j<5; ++j){
            cin >> arr[i][j];
        }
    }
    int baris, kolom1, kolom2;
    for(int i=0; i<n; ++i){
        for(int j=1; j<5; ++j){
            if(arr[i][j] == 'O' && arr[i][j-1] == 'O'){
                baris = i;
                kolom1 = j;
                kolom2 = j-1;
                ok = true;
                j++;
                temp.push_back(baris);
                temp.push_back(kolom1);
                temp.push_back(kolom2);
                break;
            }
        }
    }
    if(ok){
        cout << "YES" << endl;
        for(int i=0; i<n; ++i){
            for(int j=0; j<5; ++j){
                if(i == temp[0] && j == temp[1])
                    cout << "+";
                else if(i == temp[0] && j == temp[2])
                    cout << "+";
                else    
                    cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else cout << "NO";
}
