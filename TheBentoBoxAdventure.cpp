#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> v(5 , 0);
    for(int i = 0; i < 5; i++){
        int x;
        cin >> x;
        v[x - 1] ++;
    }
    for(int i = 0; i < 5; i++){
        if(v[i] == 0) {
            cout << i + 1;
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    