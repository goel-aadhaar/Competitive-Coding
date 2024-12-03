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
    int x , y , k; cin >>  x >> y >> k;
    int n = k;
    vvi v;
    if(k == 1){
        v.push_back({x * n , y * n});
    }
    else if(k & 1){
        v.push_back({-1, -1});
        v.push_back({x * n + 1, 0});
        v.push_back({0 , y * n + 1});
        k -= 2;
        k /= 2;
        int p = 10000000;
        while(k--){
            // p("x");
            v.push_back({p , p});
            v.push_back({-p , -p});
            p--;
        }
    }
    else {
        k -= 2;
        k /= 2;
        int p = 10000000;
        while(k--){
            v.push_back({p , p});
            v.push_back({-p , -p});
            p--;
        }
        v.push_back({x * n + 1, -1});
        v.push_back({-1 , y * n + 1});
    }
    for(int i = 0; i < v.size() ; i++){
        sp(v[i][0]);
        sp(v[i][1]);
        cout<<endl;
    }
    cout<<"cv"<<endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}