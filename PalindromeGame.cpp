#include <bits/stdc++.h>
using namespace std;
// #define ll(i , 0 , n)        for(int i = 0; i < n; i++)
// #define rl(i , 0 , n)        for(int i = 0; i < n; i++)
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
#define rsrt(arr)            sort(arr.begin(), arr.end() , greater<int>)
#define rev(arr)             reverse(all(arr))
#define MOD                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
void solve() {
    int n; cin >> n;
    string s;
    cin >> s;
    if(count(s.begin() , s.end() , '1') == n){
        p("DRAW");
    }
    if(s[n / 2] == '0' && (n & 1)){
        if(count(s.begin() , s.end() , '1') == n - 1){
            p("BOB");
        }
        p("DRAW");
    } else {
        p("BOB");
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}