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
int sqr(int number) {
    int low = 0, high = number, mid, sqrt;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (mid * mid == number) return mid;
        if (mid * mid < number) {
            low = mid + 1;
            sqrt = mid;
        }
        else high = mid - 1;
    }
    return sqrt;
}

void solve() {
    int n , k; cin >> n >> k;
    if(k >= n){
        p(1);
        return;
    }
    int mx = 1;
    int sq = sqr(n);
    for(int i = 1; i <= sq;i++){
        if(n % i == 0){
            if(n / i <=k){
                p(i);
                return;
            }
            if(i <= k)mx = max(mx , i);
        }
    }
    p(n / mx);
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}