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
void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    string s; cin >> s;
    vector<int> prefix(n);

    prefix[0] = v[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }
    int l = -1 , r = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L') {
            l = i;
            break;
        }
    }
    int sum = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'R') {
            r = i;
            break;
        }
    }  
    if(l == -1 || r == -1){
        p(0);
        return;
    }
    else {
        if(l < r){
            sum += ((l == 0) ? prefix[r] : (prefix[r] - prefix[l - 1]));
            l++;
            r--;
        }
        else {
            p(0);
            return;
        }
    }
    while(l < r){
        while(l < s.length() && s[l] != 'L') l++;
        while(r >= 0 && s[r] != 'R') r--;
        if(l < r){
            sum += ((l == 0) ? prefix[r] : (prefix[r] - prefix[l - 1]));
            l++;
            r--;
        }
        else break;
        
    }
    p(sum);

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}