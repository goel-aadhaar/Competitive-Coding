#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1) {
        cout << 0 << endl;
        return;
    }
    int i = 0 , j = n - 1;
    while(i + 1 < n && v[i] == v[i + 1]) i++;
    while(j - 1 >= 0 && v[j] == v[j - 1]) j--;
    if(j < i){
        cout << 0 << endl;
    } else if(v.front() != v.back()) {
        cout << min(j , n - i - 1) << endl;
    } else {
        cout << j - i - 1 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    