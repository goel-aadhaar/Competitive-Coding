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
    lli n , m; cin >> n >> m;
    vlli v(n); f(i, 0, n) cin >> v[i];
    vlli v1(m); f(i, 0, m) cin >> v1[i];
    lli init = 0 , i = 0 , cnt = 0 , j = 0 , numCnt = 0;
    while(j < m){
        if(v[i] < v1[j]){
            i++;
            if(i >= n) break;
            continue;
        }
        if(i < n && v[i] == v1[j]){
            // cout<<i<<" ";
            cnt ++;
            numCnt ++;
            i++;
            if(i >= n){
                j++;
                while(j < m && v[i - 1] == v1[j]) cnt += numCnt , j++;
                numCnt = 0;
                break;
            }
        }
        else {
            j++;
            while(j < m && v[i - 1] == v1[j]) cnt += numCnt , j++;
            numCnt = 0;
        }
    }
    p(cnt);
}
int main() {
    fastio;
        solve();
}