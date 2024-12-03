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
    lli n,k;cin>>n>>k;vlli v(n);f(i,0,n) cin>>v[i];
    sort_arr(v);
    // f(i,0,n) cout<<v[i]<<" ";
    // cout<<endl;
    vlli prefixSum(n);vlli suffixSum(n);
    prefixSum[0]=v[0];suffixSum[n-1]=v[n-1];
    int i=0;
    f(i,1,n){
        prefixSum[i]=prefixSum[i-1]+v[i];
    }
    // f(i,0,n) cout<<prefixSum[i]<<" ";
    // cout<<endl;

    fr(i,n-2,-1){
        suffixSum[i]=suffixSum[i+1]+v[i];
    }
    reverse_arr(suffixSum);
    // f(i,0,n) cout<<suffixSum[i]<<" ";
    // cout<<endl;
    lli mini = 1e18;
    int x =1;
    int itr = k;itr--;
    while(itr--){
        lli ans = prefixSum[2*x - 1] + suffixSum[k-x-1];
        mini =min(mini, ans);
        x++;
    }
    lli cps = prefixSum[2*k -1];
    lli css = suffixSum[k -1];
    mini=min(mini, cps);
    mini=min(mini, css);

    cout<<prefixSum[n-1]-mini<<endl;
}
int main(){
    fastio;
    int t;cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}