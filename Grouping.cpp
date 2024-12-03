#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int cnt = 1;
    int i = 0 , j = 1;
    while(i < n && j < n){
        if(j - i < k && v[j] - v[i] <= m) j++;
        else {
            // cout << j << "g" << endl;
            cnt ++;
            i = j;
            j++;
        }
    }
    cout << cnt << endl;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    