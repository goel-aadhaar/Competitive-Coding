#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    long long in = 0, mn = 0;
    for(int i = 0; i < n; i++){
        in += v[i];
        // cout << in << endl;
        mn = min(in , mn);
    }
    cout << (-1) * mn << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    