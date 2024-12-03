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
    int n; cin >> n;
    vi v(n) , b(n); for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        b[i] = 1;
    }
    bool flag1 = false , flag2 = false;
    int i1 = -1 , i2 = -1 , num = -1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j]){
                i1 = i;
                i2 = j;
                num = v[i];
                flag1 = true;
                b[i] = 1;
                b[j] = 2;
                break;
            }
        }
        if(flag1) break;
    }
    if(!flag1){
        p(-1);
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j] && i != i1 && j != i2 && num != v[i]){
                flag2 = true;
                b[i] = 1;
                b[j] = 3;
                break;
            }
        }
        if(flag2) break;
    }
    if(!flag2){
        p(-1);
        return;
    }
    for(int i = 0; i < n; i++){
        sp(b[i]);
    }
    cout << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}