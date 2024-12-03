#include <bits/stdc++.h>
using namespace std;
#define ll(i , s , n)        for(int i = s; i < n; i++)
#define rl(i , s , n)        for(int i = s; i < n; i++)
#define all(arr)             arr.begin(), arr.end()
#define vi                   vector<int>
#define pi                   pair<int , int>
#define vvi                  vector<vi>
#define vpi                  vector<pi>
#define vvpi                    vectir<vector<pair<int , int>>> vp
#define int                  int64_t
#define f                    first
#define s                    second
#define pb(x)                push_back(x)
#define ppb()               pop_back()
#define YES                  cout << "YES" << endl;
#define NO                   cout << "NO" << endl;
#define p(x)                 cout << (x) << endl;
#define sp(x)                cout << (x) << " ";
#define endl                 '\n'
#define lb(arr , x)          lower_bound(arr.begin() , arr.end() , x)
#define ub(arr , x)          upper_bound(arr.begin() , arr.end() , x)
#define bn(arr , x)          binary_search(arr.begin() , arr.end() , x)
#define mxv(arr)             *max_element(arr.begin(), arr.end())
#define mnv(arr)             *min_element(arr.begin(), arr.end())
#define smv(arr)             accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr)             sort(arr.begin(), arr.end())
#define rsrt(arr)            sort(arr.begin(), arr.end() , greater<int>())
#define rev(arr)             reverse(all(arr))
#define MOD                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
bool canFinishInHours(vi &v, int m, int k, int h) {
    int capacity = h * k; 
    int x = 0;
    int sum = 0;

    for (int i = 0; i < v.size(); i++) {
        if (sum + v[i] > h * k) {
            x++;
            sum = v[i];
            if (sum > h * k) return false;
        } else sum += buckets[i];
    }
    if (current_sum > 0) x++;

    return x <= m;
}

void solve() {
    int n, m, k; 
    cin >> n >> m >> k;
    vi v(n); 
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    int lo = 1, hi = 1e18;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (check(v, m, k, mid)) {
            hi = mid; 
        } 
        else {
            lo = mid + 1; 
        }
    }
    p(lo);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}