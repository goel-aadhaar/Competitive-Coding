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
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1) {
        p(1);
        return;
    }
    else if(n == 2){
        if(v[0] == v[1]){
            p(2);
            return;
        } else {
            p(1);
            return;
        }
    }
    vi ans;
    map<int ,int> mp;
    for(int i = 0; i < n ; i ++){
        mp[v[i]] ++;
    }
    srt(v);
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it -> first);
    }
    int x = 0, y = -1;
    vi fi;
    while(x + 1 < ans.size()){
        // if(mp[ans[x]] > 1) {
        //     x++;
        //     continue;
        // }
        if(x == ans.size() - 2){
            y = ans[x];
            int o = ans.back();
            ans.pop_back();
            ans.pop_back();
            ans.push_back(o);
            break;
        }
        swap(ans[x] , ans[x + 1]);
        x += 3;
    }
    for(int i = 0; i < ans.size() - 3; i++){
        if(ans[i] < ans[i + 1] && ans[i + 1] < ans[i + 2] && y != -1){
            ans.insert(ans.begin() + i + 1, y);
            break;
        }
    }
    for(int i = 0; i < ans.size(); i++){
        while(mp[ans[i]] != 0) fi.push_back(ans[i]) , mp[ans[i]]-- ;
    }
    // for(int i = 0; i < n ; i ++){
    //     sp(fi[i]);
    // }
    int cnt = 0;
    for(int i = 0; i < fi.size(); i++){
        if(i == 0){
            if(fi[i] >= fi[i + 1]) cnt++;
        } else if(i == n - 1){
            if(fi[i] >= fi[i - 1]) cnt++;
        } else {
            if(fi[i] >= fi[i + 1] && fi[i] >= fi[i - 1]) cnt++;
        }
    }
    p(cnt);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}