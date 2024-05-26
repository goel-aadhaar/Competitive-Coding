#include <bits/stdc++.h>
#include<numeric>
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
      int n;cin>>n;vlli v(n);f(i,0,n) cin>>v[i];
      if(find(v.begin(),v.end(),1) != v.end()){
        cout<<"Yes"<<endl;
        return;
      }
      lli gcd_ =v[0];
      lli gcd_s = v[0];
      bool flag =true;
      for(int i=1;i<n;i++){
        if(1ll*__gcd(gcd_,v[i])==1){
            if(flag==true){gcd_s = v[i];flag=false;}
            else{
                gcd_s = __gcd(gcd_s,v[i]);
            }
        }
        else{
            gcd_ = __gcd(gcd_,v[i]);
        }
      }
      if(gcd_ ==1 || gcd_s == 1){
        cout<<"No"<<endl;
        return;
      }
    bool c1 =false;
    if(find(v.begin(),v.end(),gcd_) != v.end()){
        c1=true;
    }
    else{
        for(int i=0;i<n;i++){
                if(gcd_%v[i]==0){
                    c1=true;
                    break;
                }
            }
    }
    // cout<<gcd_<<" "<<gcd_s<<endl;
    bool c2 =false;
    if(find(v.begin(),v.end(),gcd_s) != v.end()){
        c2=true;
    }
    else{
        for(int i=0;i<n;i++){
                if(gcd_s%v[i]==0){
                    c2=true;
                    break;
                }
            }
    }
    if(c1 && c2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    fastio;
    int t;cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}