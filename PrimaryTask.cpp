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
    if(n < 10) {
        NO
        return;
    }
    string s = to_string(n);
    if(s[0] == '1' && s[1] == '0'){
        for(int i = 2; i < s.length(); i++){
            if(s[i] == '0') {
                NO
                return;
            }
            else break;
        }
        rev(s);
        s.pop_back();
        s.pop_back();
        rev(s);
        if(s == ""){
            NO
            return;
        } 
        int x = stoi(s);
        if(x >= 2) YES
        else NO
    }
    else NO
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}