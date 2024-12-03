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
    string s;
    cin >> s;
    int cnt0 = 0 , cnt1 = 0 , i = 0;
    while(i < s.length()){
        s[i] == '0' ? cnt0 ++ : cnt1++;
        i++;
    }
    i = 0;
    while(i < s.length()){
        if(s[i] == '1'){
            if(cnt0 > 0) cnt0 --;
            else break;
        } else {
            if(cnt1 > 0) cnt1--;
            else break;
        }
        i++;
    }
    p(s.length () - i);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}