#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a , b;
    cin >> a >> b;
    while(a < b && a > 0){
        int diff = b - a;
        if(diff & 1){
            b -= diff + 1;
            a -= diff / 2 + 1;
        } else {
            b -= diff;
            a -= diff / 2;
        }
    }
    cout << max(a , 0) << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    