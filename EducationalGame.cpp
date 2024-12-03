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
long long exponentOfNearestPowerOf2(lli n) {
    if (n < 1) {
        return 0;
    }
    lli exponent = 0;
    while (n > 1) {
        n /= 2;
        exponent++;
    }
    return exponent;
}
void solve() {
    lli n; cin >> n;
    vlli v(n); f(i, 0, n) cin >> v[i];
    lli x = exponentOfNearestPowerOf2(n);
    lli cnt = 0;
    for(int i = 0; i < n - 1; i++){
        // cout<<v[i]<<" ";
        cnt += v[i];
        p(cnt);
        while(pow(2 , x) + i >= n) x--;
        v[pow(2 , x) + i] += v[i];
        v[i] = 0;
    }
}
int main() {
    fastio;
    solve();
}