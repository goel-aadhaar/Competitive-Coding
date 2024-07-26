#include <bits/stdc++.h>
using namespace std;

#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;

void solve() {
    int n; cin >> n;
    vi cnt(10, 0);
    vi v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] %= 10;
        cnt[v[i]] ++;
    }
    if(cnt[1] >= 3) {
        YES
        return;
    }
    for(int &x : cnt) x = min(x, 2);
    vi ans;
    for(int i = 0; i < 10; i++){
        if(cnt[i] == 2) ans.push_back(i), ans.push_back(i);
        else if(cnt[i] == 1) ans.push_back(i); 
    }
    // for(int &x : ans) cout<< x<<" ";
    
    for(int i = 0; i < ans.size(); i++){
        for(int j = i + 1; j < ans.size(); j++){
            for(int k = j + 1; k < ans.size(); k++){
                if((ans[i] + ans[j] + ans[k]) % 10 == 3) {
                    YES
                    return;
                }
            }
        }
    }
    NO
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}