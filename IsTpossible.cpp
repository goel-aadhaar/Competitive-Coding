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
    string a , b , c;
    cin >> a >> b >> c;
    multiset<char> s;
    for(int i = 0; i < b.length(); i++){
        s.insert(b[i]);
    }
    int j = 0 , it = 0; 
    while(j < a.length() && it < b.length()){
        if(a[j] == b[it]) j++;
        it++;
    }
    // cout<<j;
    if(j != a.length()){
        NO
        return;
    }
    for(int i = 0; i < a.length(); i++){
        if(s.find(a[i]) == s.end()) {
            NO
            // cout << "d";
            return;
        }
        else {
            s.erase(s.find(a[i]));
        }
    }
    if(s.empty()){
        YES
        return;
    }
    for(int  i = 0; i < c.length(); i++){
        if(s.find(c[i]) != s.end()){
            s.erase(s.find(c[i]));
        }
        if(s.empty()){
            YES
            return;
        }
    }
    NO
    // cout << "x";
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}