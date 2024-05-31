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
bool check(lli w, lli h, lli n, lli mid){
    if((log10(mid/w) + log10(mid/h))>=9)return true;
    lli ans = (mid/w)*(mid/h);
    return ans >=n;
}
 void solve(){
      lli w,h,n;cin>>w>>h>>n;
      lli lo = 0,hi = 1e15; lli ans =0;
      while(lo+1<hi){
        lli mid = lo+(hi-lo)/2;
        if(check(w, h, n, mid)){
            ans = mid;
            hi = mid;
        }
        else lo=mid;
      }
      if(check(w, h, n, lo)){
        cout<<lo<<endl;
        return;
      }
      cout<<ans<<endl; 
      
    }
signed main(){
    fastio;
    solve();
    return 0;
}
