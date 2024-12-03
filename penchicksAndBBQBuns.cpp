#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i < n + 1; i ++){
        i % 4 != 0 ? cout << i % 4 << " " : cout << 4 << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    