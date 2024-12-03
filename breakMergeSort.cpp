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

void solve() {
    int n, sum = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq; 
    // vi v;
    for(int i = 0; i < n; i++) {
        int s;
        cin >> s;
        vi temp(s);
        for(int j = 0; j < s; j++) cin >> temp[j];
        
        int cnt = 1;
        for(int j = 0; j < s - 1; j++) {
            if(temp[j] < temp[j + 1]) cnt++;
            else {
                pq.push(cnt);
                // v.push_back(cnt);
                sum += min(s - j - 1, cnt);
                // p(sum);
                cnt = 1;
            }
        }
        if (cnt > 0) pq.push(cnt);
        // if (cnt > 0) v.push_back(cnt);
    }
    // p(sum);
    while (pq.size() != 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        sum += a + b;
        pq.push(a + b);
        // p(a + b);
    }
    p(sum);
    // for(int i =0; i < v.size(); i++) p(v[i]);
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
}
