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
        int itr = s1.length() - 1;
        while(itr >= 0){
            if(s2[i] == s1[itr]){
                if(itr >= mx) {
                    // cout<<mx << " " <<i<<" "<<itr<<endl;
                    NO
                    return;
                }
                mx = itr;
                s1[itr] = '0';
                flag = true;
                break;
            }
            itr--;
        }
        if(!flag) {
            // cout<<s2[i]<<endl;
            // cout<<mx << " " <<i<<" "<<itr<<endl;
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