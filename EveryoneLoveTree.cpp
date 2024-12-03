#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n == 1 || n == 3){
        cout << -1 << endl;
    } else if(n == 2){
        cout << 66 << endl;
    } else if(n & 1){
        string s(n - 5 , '3');
        s += "36366";
        cout << s << endl;
    } else {
        string s(n - 2 , '3');
        s += "66";
        cout << s << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    