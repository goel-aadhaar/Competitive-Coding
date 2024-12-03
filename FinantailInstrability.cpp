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
    int cntA = 0 , cntB = 0;
    for(int i = 0; i < s.length() ; i ++){
        s[i] == 'A' ? cntA++ : cntB++;
    }
    if(cntA % 2 != 0 || cntB % 2 != 0) {
        NO
        return;
    }
    // p(cntA);
    // p(cntB);
    int cnta = 0 , cntb = 0;
    for(int i = 0; i < s.length() / 2; i++){
        s[i] == 'A' ? cnta++ : cntb++;
    }
    // p(cnta);
    // p(cntb);
    if((cnta == (cntA / 2)) && (cntb == (cntB / 2))){
        YES
        sp(1);
        sp(s.length() / 2 + 1);
        return;
    }
    for(int i = s.length() / 2; i < s.length(); i++){
        s[i - s.length() / 2] == 'A' ? cnta-- : cntb--;
        s[i] == 'A' ? cnta++ : cntb++;
        if((cnta == (cntA / 2)) && (cntb == (cntB / 2))){
            YES
            sp(i - s.length() / 2 + 2);
            sp(i + 2);
            return;
        }
    }
    NO
}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}