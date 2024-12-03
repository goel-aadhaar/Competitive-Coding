#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> v(n) , pref(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end() , greater<int>());
    pref[0] = v[0];
    for(int i = 1; i < n ; i++) pref[i] = pref[i - 1] + v[i];
    int num = 0;
    for(int i = 0; i < n ; i++){
        if(pref[i] <= k) num = pref[i];
        else break;
    }
    cout << k - num << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    