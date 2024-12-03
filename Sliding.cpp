#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n , m , r , c;
    cin >> n >> m >> r >> c;
    long long sum = n * m - (r - 1) * m - c;
    sum += (n - r) * (m - 1);
    cout << sum << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    