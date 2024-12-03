#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i< n ; i ++) cin >> v[i];
    if(n < 3 || (v[n - 1] != n && v[n - 2] != n) || (v[0] != 1 && v[1] != 1) || abs(v[0] - v[1]) > 1 || abs(v[n - 1] - v[n - 2] > 1)){
        cout << "NO" << endl;
        return;
    }
    for(int i = 1 ; i < n - 1; i++){
        if(abs(v[i] - (i + 1)) > 2 || abs(v[i] - v[i + 1]) > 2) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    