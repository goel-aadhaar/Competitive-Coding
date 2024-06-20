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
    vlli v(n); f(i, 0, n) cin >> v[i];
    vector<long long> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]+ v[i];
    }
    vector<long long> prem(n);
    prem[0]=v[0];
    for(int i=1;i<n;i++){
        prem[i] = max(prem[i-1] , v[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(pre[i] - prem[i] == prem[i])count++;
    }
    cout<<count<<endl;
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}