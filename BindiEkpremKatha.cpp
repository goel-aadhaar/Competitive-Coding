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
#define rsrt(arr)            sort(arr.begin(), arr.end() , greater<int>)
#define rev(arr)             reverse(all(arr))
#define MOD                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
void solve() {
    int n , m; cin >> n >> m;
    vpi v , ans;
    int cnt=0 ;
    for(int i = 0; i <= n ; i ++){
        for(int j = 0; j <= m; j++){
            v.push_back({i , j});
        }
    }
    for(int i = 0; i < v.size(); i++){
        bool flag = true;
        for(int j = 0; j <= n ; j ++){
            bool fl = true;
            for(int k = 0; k <= m; k++){
                int d = pow((v[i].first - j) , 2) + pow((v[i].second - k) , 2);
                int sq = sqrt(d);
                if(sq * sq == d){
                    fl = false;
                    break;
                }
            }
            if(fl == false){
                flag = false;
                break;
            }
        }
        if(flag) {
            cnt++;
            ans.push_back({v[i].first , v[i].second});
        }
    }
    p(cnt);
    for(int i = 0; i < ans.size() ; i++){
        sp(ans[i].first);
        sp(ans[i].second);
        cout << endl;
    }
}
signed main() {
    fastio;
        solve();
}