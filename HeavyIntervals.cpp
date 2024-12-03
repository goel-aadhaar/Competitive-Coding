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
#define ppb(x)               pop_back()
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
    int n; cin >> n;
    vi l(n); for(int i = 0; i < n; i++) cin >> l[i];
    vi r(n); for(int i = 0; i < n; i++) cin >> r[i];
    vi c(n); for(int i = 0; i < n; i++) cin >> c[i];
    vpi vp(2 * n);
    for(int i = 0; i < n ; i ++){
        vp[i] = {l[i] , 'l'};
        vp[i + n] = {r[i] , 'r'};
    }
    srt(vp);
    srt(c);
    vi diff;
    stack<pair<int , int>> st;
    for(int i = 0 ; i < 2 * n; i++){
        if(!st.empty() && vp[i].second == 'r' && st.top().second == 'l'){
            diff.push_back(vp[i].first - st.top().first);
            st.pop();
        } else st.push(vp[i]);
    }
    rsrt(diff);
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += diff[i] * c[i]; 
    }
    p(sum);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}