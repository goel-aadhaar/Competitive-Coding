#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int ,int> mp;
    for(int i = 0; i < n; i++) cin >> v[i] , mp[v[i]] ++;
    int mx = 1;
    for(auto it : mp){
        mx = max(mx , it.second);
    }
    cout << n - mx << endl;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    