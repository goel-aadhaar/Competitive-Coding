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

vvi v(9, vi(1000000, 0));
vvi pref(9, vi(1000000, 0));

int g(int n) {
    if(n < 10) return n;
    int x = 1;
    while(n != 0){
        if(n % 10) x *= n % 10;
        n /= 10;
    }
    return g(x);
}
void solve() {
    int l, r, k; cin >> l >> r >> k;
    int ans = pref[k-1][r-1] - pref[k-1][l-1];

    p(v[k-1][l-1] ? ans + 1 : ans);
    
}
int main() {
    fastio;
    
    f(i , 0 , 1000000){
        v[g(i + 1)- 1][i]++;
    }

    f(i , 0 , 9){
        pref[i][0] = v[i][0];
        f(j , 1 , 1000000){
            pref[i][j] = pref[i][j-1] + v[i][j];
        }
    }

    int t; cin >> t;
    while (t--)
        solve();
}