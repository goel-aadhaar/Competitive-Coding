#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int i = 0 , sum = 0 , total = 0 , penalty = 0;
    while(i < n){
        sum += min((n - i) * (v[i] - penalty) , k - sum);
        // cout << total << endl;
        // cout << sum << endl;
        penalty = v[i];
        if(sum == k) break;
        while(i < n && v[i] == penalty) i++ , total++;
        // cout << total << endl;
        if(i == n) break;
    }
    cout << total + sum << endl;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    