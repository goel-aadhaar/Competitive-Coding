#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int i = 1;
    while(n--){
        cout << i << " ";
        i += 2;
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    