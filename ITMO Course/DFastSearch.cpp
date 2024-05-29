#include <bits/stdc++.h>
using namespace std;
 
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i = i + step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define vlli vector<lli>
#define vvlli vector<vlli>
#define pii pair<int, int>
#define pll pair<lli, lli>
#define pss pair<string,string>
#define ceil(a, b) (a + b - 1) / b
#define max_arr(arr) *max_element(arr.begin(), arr.end())
#define min_arr(arr) *min_element(arr.begin(), arr.end())
#define sum_arr(arr) accumulate(arr.begin(), arr.end(), 0)
#define sort_arr(arr) sort(arr.begin(), arr.end())
#define reverse_arr(arr) reverse(all(arr))
#define MOD1 (int)998244353
#define MOD2 (int)(1e9 + 7)
#define fastio                             \
    std::ios_base::sync_with_stdio(false); \
    std::cout.tie(nullptr);                \
    std::cin.tie(nullptr)
typedef long long lli;
 
#define BIT(x,i) ((x & (1LL << i)) > 0LL )
 void solve(){
      int n;cin>>n;
      vi v(n);
      f(i,0,n) cin>>v[i];
      sort_arr(v);
      int k;cin>>k; 
      vector<pii> q(k);
      f(i,0,k) cin>>q[i].first>>q[i].second;
        int ans,ans1;
      for(int i=0;i<k;i++){
        int x= q[i].first;
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(v[mid]==x){
                hi=mid-1;
            }
            else if(v[mid]>x)hi = mid -1;
            else lo = mid +1;
        }
        ans = lo+1;

        int x1= q[i].second;
        int lo1=0,hi1=n-1;
        while(lo1<=hi1){
            int mid1 = lo1+(hi1-lo1)/2;
            if(v[mid1]==x1){
                lo1=mid1+1;
            }
            else if(v[mid1]>x1)hi1 = mid1 -1;
            else lo1 = mid1 +1;
        }
        ans1 = hi1+1;
        cout<<ans1-ans+1<<" ";
      }
      
    }
int main(){
    fastio;
    // int t;cin >> t;
    // while(t--){
        solve();
    // }  
    return 0;
}