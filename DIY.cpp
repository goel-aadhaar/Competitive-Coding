#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<int , int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ans;
    for(auto it : mp){
        if(it.second > 1) {
            int total = it.second / 2;
            while(total--) ans.push_back(it.first);
        }

    }
    if(ans.size() < 4){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << ans[0] << " " << ans[1] << " " << ans[0] << " " 
             << ans[ans.size() - 1] << " " << ans[ans.size() - 2] << " " 
             << ans[ans.size() - 1] << " " << ans[ans.size() - 2] << " " 
             << ans[1] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    