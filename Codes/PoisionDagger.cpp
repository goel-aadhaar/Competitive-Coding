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
bool check(lli mid, vlli &v, lli n, lli k){
    lli sum = 0;
    for(int i=0;i<n-1;i++){
        if(v[i + 1] - v[i] < mid){
            sum += v[i + 1] - v[i];
        }
        else{
            sum += mid;
        }
    }
    sum += mid;
    return sum >= k;
}
void solve() {
    lli n, k; cin >> n >> k;
    vlli v(n); f(i, 0, n) cin >> v[i];
    lli lo = 0, hi = k;
    lli ans = 0;
    while(lo <= hi){
        lli mid = lo + ((hi - lo) / 2);
        if(check(mid, v, n, k)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    cout<<ans<<endl;
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}