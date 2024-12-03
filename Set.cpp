#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l , r , k;
    cin >> l >> r >> k;
    int cnt = r / k - l;
    cout << max(0 , cnt + 1) << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    