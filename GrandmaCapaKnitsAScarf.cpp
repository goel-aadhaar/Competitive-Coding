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
    string s;
    cin >> s;
    int mn = INT_MAX;
    for(char x = 'a'; x <= 'z'; x++){
        int temp = 0 , i = 0, j = n - 1;
        bool flag = true;
        while(i < j){
            if(s[i] != s[j]){
                if(s[i] == x) i++ , temp ++;
                else if(s[j] == x) j-- , temp ++;
                else {
                    flag = false;
                    break;
                }
            } else {
                i++;
                j--;
            }
        }
        if(flag){
            mn = min(mn , temp);
        }
    }
    mn == INT_MAX ? cout << -1 << endl : cout << mn << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}