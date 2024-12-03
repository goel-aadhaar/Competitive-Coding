#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i ++) cin >> v[i];
    for(int i = 1; i < n; i ++) {
        v[i] += v[i - 1];
    }
    set<int> s;
    for(int i = 1 ; i <= 500 ; i += 2){
        s.insert(i * i);
    }
    int cnt = 0;
    for(int i = 0; i < n ; i ++){
        if(s.find(v[i]) != s.end()) cnt ++;
    }
    cout << cnt << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    