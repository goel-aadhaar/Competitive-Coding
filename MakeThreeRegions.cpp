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
    string s1 , s2; cin >> s1 >> s2;
    if(n < 3){
        p(0);
        return;
    }
    int cnt = 0;
    for(int i = 1; i < n - 1 ; i ++){
        if((s1[i - 1] == s1[i + 1] && s1[i - 1] == 'x') && (s2[i - 1] == s2[i + 1] && s2[i - 1] == '.')){
            if(s1[i] != 'x')cnt ++;
        }
    }
    for(int i = 1; i < n - 1 ; i ++){
        if((s2[i - 1] == s2[i + 1] && s2[i - 1] == 'x') && (s1[i - 1] == s1[i + 1] && s1[i - 1] == '.')){
            if(s2[i] != 'x')cnt ++;
        }
    }
    
    p(cnt);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}