#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
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
    vi v(n); f(i, 0, n) cin >> v[i];
    int m; cin >> m;
    vector<pair<int,int>> vp(m);
    f(i, 0, m) {
        cin >> vp[i].first >> vp[i].second;
        vp[i].first--;vp[i].second--;
    }
    vector<int> idx,ridx;
    f(i, 1, n - 1){
        if(v[i] - v[i - 1] < v[i + 1] - v[i]) idx.push_back(i);
    }
    fr(i, n - 2, 0){
        if(v[i] - v[i - 1] > v[i + 1] - v[i]) ridx.push_back(i);
    }
    int count = 0, sum = 0;
    f(i, 0, m){
        count = 0;
        sum = 0;
        if(vp[i].first > vp[i].second){
            int j = 0;
            while(j < ridx.size() && ridx[j] > vp[i].second){
                if(vp[i].first >= ridx[j] && vp[i].second < ridx[j]){
                    count ++;
                    sum += v[ridx[j]] - v[ridx[j] - 1];
                }
                j++;
            }
            cout << sum + vp[i].first - vp[i].second - count << endl;
        }
        else{
            int j = 0;
            while(j < idx.size() && idx[j] <= vp[i].second){
                if(vp[i].first <= idx[j] && vp[i].second > idx[j]){
                    count ++;
                    sum += v[idx[j] + 1] - v[idx[j]];
                }
                j++;
            }
            cout << sum + vp[i].second - vp[i].first - count << endl;
        }
    }

}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}