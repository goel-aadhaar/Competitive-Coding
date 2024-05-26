#include <bits/stdc++.h>
#include<stack>
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
      int n;cin>>n;vi heights(n);f(i,0,n) cin>>heights[i];
    
        vector<int>nse(n),pse(n);
        nse[n-1]=n;
        pse[0]=-1;
        stack<int>st1,st2;
        st1.push(0);
        st2.push(n-1);
        for(int i=1;i<n;i++){
            if(!st1.empty())while(!st1.empty() && heights[st1.top()]>=heights[i])st1.pop();
            if(st1.empty())pse[i]=-1;
            else pse[i]=st1.top();
            st1.push(i);
        }
        for(int i =n-2;i>=0;i--){
            if(!st2.empty())while(!st2.empty() && heights[st2.top()]>=heights[i])st2.pop();
            if(st2.empty())nse[i]=n;
            else nse[i]=st2.top();
            st2.push(i);
        }
        f(i,0,n){
            cout<<pse[i]<<" ";
        }
        cout<<endl;
        f(i,0,n){
            cout<<nse[i]<<" ";
        }
        cout<<endl;
        vector<int>ans(n);
        f(i,0,n){
            ans[i]=(abs(nse[i]-pse[i])-1)*heights[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    fastio;
    int t;cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}