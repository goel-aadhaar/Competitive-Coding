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
    int n , k; cin >> n >> k;
    string s1 , s2;
    // p("jk");
    cin >> s1 >> s2;
    vvi v(n , vi (26));
    v[0][s1[0] - 'a']++;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 26; j++){
            v[i][j] = v[i - 1][j];
        }
        v[i][s1[i] - 'a']++;
    }
    vvi v1(n , vi (26));
    v1[0][s2[0] - 'a']++;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 26; j++){
            v1[i][j] = v1[i - 1][j];
        }
        v1[i][s2[i] - 'a']++;
    }
    while(k--){
        int l , r;
        cin >> l >> r;
        l--;
        r--;
        int cnt = 0;
        for(int i = 0; i < 26; i++){
            int cnta = (v1[r][i] - (l > 0 ? v1[l - 1][i] : 0));
            int cntb = (v[r][i] - (l > 0 ? v[l - 1][i] : 0));
            cnt += abs(cnta - cntb);
        }
        p(cnt / 2);
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}