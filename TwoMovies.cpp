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
    vi v1(n); f(i, 0, n) cin >> v1[i];
    int a = 0, b = 0, cntNeg = 0, cntPos = 0;
    for(int i=0;i<n;i++){
        if(v[i] == v1[i]){
            if(v[i] == 0) continue;
            else if(v[i] == -1) cntNeg ++;
            else cntPos ++;
        }
        else if(v[i] > v1[i]) a += v[i];
        else b += v1[i];
    }
    // cout<< a<<" "<<b;
    if(cntPos > 0) {
        while(cntPos > 0){
            if(a <= b) a++;
            else b++;
            cntPos --;
        }
    }
    if(cntNeg > 0) {
        while(cntNeg > 0){
            if(a <= b) b--;
            else a--;
            cntNeg --;
        }
    }
    cout<<min(a,b)<<endl;

}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}