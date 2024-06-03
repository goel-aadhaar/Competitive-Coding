#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define vvlli vector<vlli>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define pss pair<string, string>
#define ceil(a, b) ((a + b - 1) / b)
#define max_arr(arr) *max_element(arr.begin(), arr.end())
#define min_arr(arr) *min_element(arr.begin(), arr.end())
#define sum_arr(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD1 998244353
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
#define BIT(x,i) ((x & (1LL << i)) > 0LL)
lli gcd(lli a, lli b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
lli gcdArray(vector<lli>& arr) {
    lli result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}
void solve() {
    int n; cin >> n; vlli arr(n); f(i, 0, n) cin >> arr[i];
    lli gcd_ = gcdArray(arr);
    p(2*gcd_);
    // vector<int> factors;
    // for (int i = 2; i * i <= n; i++) {
    //     while (n % i == 0) {
    //         factors.push_back(i);
    //         n /= i;
    //     }
    // }
    // if (n > 1) {
    //     factors.push_back(n);
    // }
    // f(i,0,n){

    // }
}
int main() {
    fastio; int t; cin >> t; while (t--) { solve(); } return 0;
}