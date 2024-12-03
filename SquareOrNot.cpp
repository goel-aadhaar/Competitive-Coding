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
    int sq = sqrt(n);
    if(sq * sq != n){
        cout<<"No"<<endl;
        return;
    }
    int i = 0;
    while(i < sq){
        if(s[i] == '0'){
            cout<<"No"<<endl;
            return;
        }
        i++;
    }
    i = n - 1;
    for(int j = 0; j < sq; j++){
        if(s[i] == '0'){
            cout<<"No"<<endl;
            return;
        }
        i--;
    }
    for(int k = sq; k < n - sq; k++){
        if(k % sq == 0 || (k + 1) % sq == 0) {
            if(s[k] == '0'){
                cout<<"No"<<endl;
                return;
            }
        }
        else{
            if(s[k] == '1'){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}