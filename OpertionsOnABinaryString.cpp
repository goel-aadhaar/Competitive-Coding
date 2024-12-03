#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k; cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    int one = count(s.begin() , s.end() , '1');
    // cout << one << endl;
    for(int i = 0; i < n ; i ++){
        if(s[i] == '0'){
            int cnt = 0;
            while(i < n && s[i] == '0') i++, cnt++;
            v.push_back(cnt);
        }
    }
    vector<int> temp;
    sort(v.begin() , v.end() , greater<int>());
    // cout << v.front() << endl;
    for(int i = 0; i < v.size(); i ++){
        if((2 * v[i] + 1) <= k){
            k -= (2 * v[i] + 1);
            one += v[i];
        } else temp.push_back(v[i]);
    }
    sort(temp.begin() , temp.end() , greater<int>());
    
    if(temp.empty()) cout << (one) << endl;
    else {
        cout << min(temp.front() , (k - 1) / 2) + one << endl;
    }
}
signed main() {
    int t; cin >> t;
    while (t--)
        solve();
}