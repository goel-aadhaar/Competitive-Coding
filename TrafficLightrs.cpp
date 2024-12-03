#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int sum = 0;
    for(int i = 0; i < n ; i ++){
        int r , g , d;
        cin >> r >> g >> d;
        sum += v[i];
        int on = 0;
        int modulo = (sum + d) % (r + g);
        if(modulo >= g) sum += (r+g - modulo);
    }
    cout << sum << endl;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    