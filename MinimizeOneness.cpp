#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    cout << '1' + string(n - 1 , '0') << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
    