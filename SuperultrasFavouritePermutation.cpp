#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n < 5){
        cout << -1 << endl;
    } else {
        for(int i = 1; i <= n; i += 2) if(i != 5) cout << i <<  " ";
        cout << 5 << " " << 4 << " ";
        for(int i = 2; i <= n; i += 2) if(i != 4) cout << i << " ";
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    