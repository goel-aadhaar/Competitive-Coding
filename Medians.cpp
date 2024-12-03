#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;
    cin >> n >> k;
    if(n == 1){
        cout << 1 << endl << 1 << endl;
        return;
    } else if(k == ((n + 1) / 2)){
        cout << n << endl;
        for(int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
    } else if(k == 1 || k == n){
        cout << -1 << endl;
        return;
    } else {
        cout << 3 << endl;
        if(k & 1){
            cout << 1 << " " << k - 1 << " " << k + 2 << " ";
        } else {
            cout << 1 << " " << k << " " << k + 1 << endl;
        }
        cout << endl;
        
    }
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    