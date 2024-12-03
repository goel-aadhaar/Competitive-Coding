#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n < 4) {
        cout << n + 1 << endl;
        return;
    }
    int sum = 0;
    sum += ((n + 1)/ 2) % 3 == 0 ? ((n + 1) / 2) / 3 : ((n + 1) / 2) / 3 + 1;
    if(n & 1){
        cout << sum + n / 2 + 1 + n / 2<< endl;
    } else {
        cout << sum + n / 2 + n / 2<< endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    