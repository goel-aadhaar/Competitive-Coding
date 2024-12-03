#include <bits/stdc++.h>
using namespace std;
#define ll(i , s , n)        for(int i = s; i < n; i++)
#define rl(i , s , n)        for(int i = s; i < n; i++)
#define all(arr)             arr.begin(), arr.end()
#define vi                   vector<int>
#define pi                   pair<int , int>
#define vvi                  vector<vi>
#define vpi                  vector<pi>
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
void solve() {
    int n , m; cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i ++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j ++){
            bool flag = true;
            if(i > 0) {
                if(v[i][j] != v[i - 1][j]) flag = false;
            }
            if(i < n - 1){
                if(v[i][j] != v[i + 1][j]) flag = false;
            }
            if(j > 0) {
                if(v[i][j] != v[i][j - 1]) flag = false;
            }
            if(j < m - 1){
                if(v[i][j] != v[i][j + 1]) flag = false;
            }
            if(flag) cnt++;
        }
    }
    // p(cnt);
    int sum = 1;
    while(cnt--){
        sum *= 2;
        sum %= MOD;
    }
    p(sum);
    
}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}