#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<long long>
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
    vlli v(n); f(i, 0, n) cin >> v[i];
    long long cnt = 0;
    rev(v);
    long long mx = mxv(v);
    long long num = 0;
    int j =0;
    bool flag =  true;
    for (int i = 0; i < n - 1; i++) {
        if(v[i + 1] == 0) continue;
        if (v[i] >= v[i + 1]) cnt += v[i] - v[i + 1] + 1, num = v[i + 1], j = i,flag =false;
        else v[i+1] = max(v[i+1] - cnt, v[i]), num = v[i+1], cnt += v[i] - v[i + 1] + 1;
    }
    cnt += num;
    p(mx > cnt ? mx : cnt);
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}
