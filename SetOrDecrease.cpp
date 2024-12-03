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
#define srtr(arr) sort(arr.begin(), arr.end(),greater<int>())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;

bool check(lli mid , vlli v , lli n , lli k){
    lli temp = 0;
    // lli last = v[n-1];
    if(mid > (n - 1)) {
        v[n-1] -= (mid - (n - 1));
        mid = n - 1;
    }
    lli sum = smv(v);
    for(int  i = 0; i < mid; i++) temp += v[i];
    sum -= temp;
    sum += mid * v[n-1];
    if(sum <= k) return true;
    lli p = mid;
    while(p -= 1){
        sum += v[p - 1];
        sum -= (p - 1);
        if(sum <= k) return true;
    }
    // v[n-1] = last;
    return false;
}
void solve() {
    lli n , k; cin >> n >> k;
    vlli v(n); f(i, 0, n) cin >> v[i];
    srtr(v);
    lli lo = 0, hi = k * n;
    lli ans = -1;
    while(lo <= hi){
        lli mid = lo + (hi - lo) / 2;
        if(check(mid , v , n , k)) {
            hi = mid - 1;
            ans = mid;
            // cout<<"j";
        }
        else lo = mid + 1;
    }
    p(ans);
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}