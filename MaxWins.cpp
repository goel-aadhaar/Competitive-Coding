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
#define ppb()                pop_back()
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

bool cmp(const tuple<int , int , int>& t1 , const tuple<int , int , int>& t2) {
    return get<1>(t1) < get<1>(t2);
}

void solve() {
    int n; 
    cin >> n;
    
    vi ans(n);
    vector<tuple<int , int , int>> v(n);
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = make_tuple(x, i, x); 
    }
    
    srt(v);
    
    int num = 0, i = 0, temp = 1;
    
    while(i < n) {
        int times = temp;
        while(times-- && i < n) {
            get<0>(v[i]) = num;
            i++;
        }
        num++;
        temp *= 2;
    }
    
    for(int i = n - 1; i > 0; i--) {
        if(get<0>(v[i]) != get<0>(v[i - 1]) && get<2>(v[i]) == get<2>(v[i - 1])) {
            get<0>(v[i - 1]) = get<0>(v[i]);
        }
    }
    
    sort(all(v), cmp);
    
    for(int i = 0; i < n; i++) {
        cout << get<0>(v[i]) << " ";
    }
    cout << endl;
}

signed main() {
    fastio;
    int t; 
    cin >> t;
    while (t--)
        solve();
}
