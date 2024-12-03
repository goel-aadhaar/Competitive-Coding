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
    string str; cin >> str;
    int cntA = 0, cntB = 0 , cntC = 0 , cntD = 0;
    for(int  i= 0; i< str.size(); i++){
        if(str[i] == 'A') cntA++;
        else if(str[i] == 'B') cntB++;
        else if(str[i] == 'C') cntC++;
        else if(str[i] == 'D') cntD++;
    }
    int sum = min(n , cntA) + min(n , cntB) + min(n , cntC) + min(n , cntD) ;
    p(sum);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}