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
    string s1 , s2;
    cin >> s1 >> s2;
    int mx = INT_MAX;
    for(int i = s2.length() - 1; i >= 0; i--){
        bool flag = false;
        int last = s1.length() - 1;
        while(last >= 0){
            if(s2[i] == s1[last]){
                if(last >= mx) {
                    NO
                    return;
                }
                mx = last;
                s1[last] = '0';
                flag = true;
                break;
            }
            last--;
        }
        if(!flag) {
            NO
            return;
        }
    }
    YES
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}