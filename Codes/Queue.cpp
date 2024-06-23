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
    int n , sum = 0, count = 1; cin >> n;
    vi v(n); f(i, 0, n) cin >> v[i];
    srt(v);
    vi pref(n);
    pref[0] = v[0];
    f(i , 1 , n)
        pref[i] = pref[i-1] + v[i];
    f(i , 1 , n){
        if(pref[i-1] - sum <= v[i]) count ++;
        else {
            sum += v[i];
        } 
    }
    p(count);
}
int main() {
    fastio;
        solve();
}