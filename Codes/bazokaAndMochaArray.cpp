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
      int n;cin>>n;vi v(n);f(i,0,n) cin>>v[i];
      int count=0;
      int mini=v[0];
      for(int i=1;i<n;i++){
        if(count<2){
            if(v[i]>=mini)mini=v[i];
            else{
                
                if(v[n-1]<=v[0]){
                    count++;
                    mini=v[i];
                }
                else{
                    cout<<"No"<<endl;
                    return;
                }
                if(count>1){
                    cout<<"No"<<endl;
                    return;
                }
                
            }
        }
        else {
            cout<<"No"<<endl;
            return;
        }
      }
      cout<<"Yes"<<endl;
      
    }
int main(){
    fastio;
    int t;cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}