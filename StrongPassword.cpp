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
    string str;
    cin >> str;
    string ans = "";
    int i;
    bool  flag = false;
    for(i = 0; i < str.length() - 1; i ++){
        if(flag == false && str[i] == str[i + 1]){
            flag = true;
            ans += str[i];
            if(str[i] == 'a') ans += 'z';
            else ans += 'a';
        }
        else ans += str[i];
    }
    ans += str.back();
    if(flag == false){
        if(str.back() == 'a') str += 'z';
        else str += 'a';
        p(str);
    }
    else p(ans);

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}