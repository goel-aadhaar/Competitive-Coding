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

bool check(lli mid, vi v, int n, int k){
    int count = 1;
    int dif = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] - dif >= mid){
            count++;
            dif = v[i];
        }
    }
    return count >= k;
}

void solve() {
    int n, k; cin >> n >> k;
    lli ans = 0;
    vi v(n); f(i, 0, n) cin >> v[i];
    lli lo = 0, hi = 1e9;
    while(lo <= hi){
        lli mid = lo + (hi - lo) / 2;
        if (check(mid, v, n, k)){
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}
