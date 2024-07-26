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
    int a , b , xk , yk , xq , yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int,int>> s1;
    set<pair<int,int>> s2;
    s1.insert({xk + a , yk + b});
    s1.insert({xk - a , yk - b});
    s1.insert({xk + b , yk + a});
    s1.insert({xk - b , yk - a});
    s1.insert({xk + b , yk - a});
    s1.insert({xk - b , yk + a});
    s1.insert({xk + a , yk - b});
    s1.insert({xk - a , yk + b});

    s2.insert({xq + a , yq + b});
    s2.insert({xq - a , yq - b});
    s2.insert({xq + b , yq + a});
    s2.insert({xq - b , yq - a});
    s2.insert({xq - b , yq + a});
    s2.insert({xq + b , yq - a});
    s2.insert({xq - a , yq + b});
    s2.insert({xq + a , yq - b});

    int cnt = 0;
    for (auto it : s1) {
        if (s2.find(it) != s2.end()) {
            cnt++;
        }
    }
    p(cnt);
    
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}