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
    string s = to_string(n);
    int cnt0 = 0 , cnt5 = 0;
    int idx0 = 0 , idx5 = 0;
    for(int i = s.size() - 1; i >=0; i--){
        if(s[i] == '0'){
            idx0 = i;
            break;
        } 
        else cnt0 ++;
    }
    for(int i = s.size() - 1; i >=0; i--){
        if(s[i] == '5'){
            idx5 = i;
            break;
        } 
        else cnt5 ++;
    }
    for(int i = idx0 - 1; i >=0; i--){
        if(s[i] == '0') break;
        else if(s[i] == '5') break;
        else cnt0++;
    }
    for(int i = idx5 - 1; i >=0; i--){
        if(s[i] == '2') break;
        else if(s[i] == '7') break;
        else cnt5++;
    }
    p(min(cnt0 , cnt5));
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}