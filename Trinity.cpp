#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int cnt = 0 , mn;
    int i = 0 , j = n - 1;
    for(i = 0; i < n - 1; i++){
        if(v[i] + v[i + 1] <= v.back()){
            cnt++;
        } else {
            break;
        }
    }
    i--;
    mn = cnt;
    // for(int i = 0; i < n ; i++) cout << v[i] << " ";
    // cout << endl;
    while(j--){
        cnt++;
        // cout << cnt << "g" << i <<  endl;
        while(v[i] + v[i + 1] > v[j]){
            i--;
            cnt--;
            if(i < 0){
                mn = min(mn , cnt);
                cout << mn << endl;
                return;
            }
        }
        mn = min(mn , cnt);
    }
    cout << mn << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    