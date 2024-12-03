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
    lli x , y , z , k; cin >> x >> y >> z >> k;
    lli cnt = 0;
    for(lli i = 1; i <= x; i ++){
        for(lli j = 1; j <= y; j++){
            if(k % (i * j) == 0 && (k / (i * j)) <= z){
                lli temp = (x - i + 1) * (y - j + 1) * (z - (k / (i * j)) + 1);
                cnt = max(temp , cnt);
            } 
        }
    }
    p(cnt);
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}