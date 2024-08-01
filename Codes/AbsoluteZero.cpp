#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

long long customCeil(long long num, long long den) {
    return (num + den - 1) / den;
}

void solve() {
    int n; cin >> n;
    vector<long long> v(n); for(int i = 0; i < n; i++) cin >> v[i];
    if(count(v.begin() , v.end() , 0) == n) {
        p(0);  
        p(" ");
        return;
    }
    vector<long long> ans;
    long long sum = 0;
    int x = 40;
    while(x--){
        sum = (mxv(v) + mnv(v)) / 2;
        for(int i = 0; i < n; i++){
            v[i] -= sum;
            v[i] = abs(v[i]);
        }
        ans.push_back(sum);
        if(count(v.begin() , v.end() , 0) == n) break;
    }
    if(count(v.begin() , v.end() , 0) == n){
        p(ans.size());
        for(int ele : ans){
            sp(ele);
        }
    }
    else p(-1);
    cout<<endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}