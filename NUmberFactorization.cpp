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
    vi v(n);
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    vector<pair<int , int>> vp;
    int num , cnt = 0;
    for(int i = 0; i < v.size(); i++){
        num = v[i];
        cnt = 0;
        while(num == v[i]) cnt ++;
        vp.push_back({cnt , num});
    }
    srt(vp);
    int prod = 1;
    for(int i = 0; i < vp.size(); i++){
        prod *= vp[i].second;
    }
    int j = 0 , it = 0;
    int p , sum = 0;
    while(vp.back().first > 0){
        p = vp[j].first;
        sum += p * prod;
        while(vp[j].first == p){
            prod /= vp[j].second;
            j++;
        }
        for(int i = 0; i < vp.size(); i++){
            vp[i].first --;
        }
    }
    p(sum);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}