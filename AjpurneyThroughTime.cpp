// #include <bits/stdc++.h>
// using namespace std;
// #define ll(i , s , n)        for(int i = s; i < n; i++)
// #define rl(i , s , n)        for(int i = s; i < n; i++)
// #define all(arr)             arr.begin(), arr.end()
// #define vi                   vector<int>
// #define pi                   pair<int , int>
// #define vvi                  vector<vi>
// #define vpi                  vector<pi>
// #define int                  int64_t
// #define f                    first
// #define s                    second
// #define pb(x)                push_back(x)
// #define ppb()                pop_back()
// #define YES                  cout << "YES" << endl;
// #define NO                   cout << "NO" << endl;
// #define p(x)                 cout << (x) << endl;
// #define sp(x)                cout << (x) << " ";
// #define endl                 '\n'
// #define lb(arr , x)          lower_bound(arr.begin(), arr.end(), x)
// #define ub(arr , x)          upper_bound(arr.begin(), arr.end(), x)
// #define bn(arr , x)          binary_search(arr.begin(), arr.end(), x)
// #define mxv(arr)             *max_element(arr.begin(), arr.end())
// #define mnv(arr)             *min_element(arr.begin(), arr.end())
// #define smv(arr)             accumulate(arr.begin(), arr.end(), 0LL)
// #define srt(arr)             sort(arr.begin(), arr.end())
// #define rsrt(arr)            sort(arr.begin(), arr.end(), greater<int>())
// #define rev(arr)             reverse(all(arr))
// #define MOD                  1000000007
// #define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
// #define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// void solve() {
//     int n, k; 
//     cin >> n >> k;
//     vpi v(n);
//     for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    
//     srt(v);  

//     int mx = 0;
//     int i = 0; 
//     multiset<int> ans; 

//     for (int j = 0; j < n; j++) {
//         ans.insert(v[j].second);

//         while (v[j].first - v[i].first > k) {
//             ans.erase(ans.find(v[i].second));
//             i++;
//         }

//         if (ans.size() > 1) {
//             auto it1 = ans.rbegin();  
//             auto it2 = ++ans.rbegin();  
//             mx = max(mx, *it1 + *it2 + abs(v[j].first - v[i].first));
//         }
//     }
    
//     p(mx);
// }

// signed main() {
//     fastio;
//     solve();
// }
#include <bits/stdc++.h>
using namespace std;
#define l(i,st,n)       for(int i=st;i<n;i++)
#define fastio          ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
string s;
 
int dp[1001][1001];
int fn(int i , int j){
    if(i == j) return 1;
    if(i>j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
 
    if(s[i]==s[j]){
        return dp[i][j] = 2 + fn(i+1,j-1); 
    }else{
        return dp[i][j] = max(fn(i,j-1) , fn(i+1,j)); 
    }
}
 
 
 
signed main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        s = s1+s2;
        memset(dp,-1,sizeof(dp));
        int ans= 0;
        l(i,0,s1.size()){
            int ians=0;
            for(int j=s1.size() ; j < s.size() ; j++){
                if(s[i]==s[j]){
                    ians = 2 + max(0,fn(i+1,j-1));
                    ans = max(ans,ians);
                }
            }
            
        }
        cout<<ans<<endl;
        
    }
}
