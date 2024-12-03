#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first;
    for (int i = 0; i < n; i++) cin >> v[i].second;
    // int mxi  = 0 , mx = INT_MIN;
    // for(int i = 0 ; i < n ; i ++){
    //     if(v[i].first + v[i].second > mx ) mx = v[i].first + v[i].second , mxi = i;
    // }
    int sum = 0;
    for(int i = 0 ; i < n ; i ++){
        // if(i == mxi) continue;
        if(v[i].first > v[i].second) sum += (v[i].first);
        else sum += v[i].second;
    }
    // cout << sum << endl;
    int mx = INT_MIN;
    for(int i = 0; i < n ; i++){
        int cnt = sum + min(v[i].first , v[i].second);
        mx = max(mx , cnt);
    }
    cout << mx << endl;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    