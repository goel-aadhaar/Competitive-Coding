#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for(int i = 0; i < 2 * n; i++) cin >> v[i];
    int cnt1 = count(v.begin() , v.end() , 1);
    int cnt0 = 2 * n - cnt1;
    if(cnt1 & 1){
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if(cnt1 > n){
        cout << n - (cnt1 - n) << endl;
    } else {
        cout << cnt1 << endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    