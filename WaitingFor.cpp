#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n;
    cin >> n;
    vector<pair<char , int>> v(n);
    for(int i = 0; i < n ; i++) cin >> v[i].first >> v[i].second;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(v[i].first == 'P') sum += v[i].second;
        else {
            if(v[i].second > sum){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            sum -= min(v[i].second , sum);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    