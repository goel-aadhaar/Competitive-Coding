#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    int n;cin>>n;vl v(n);
    For(i,n)cin>>v[i];
    For(i,n-1){
        if(v[i]==1){
            v[i]++;
            if(i!=0 && v[i]%v[i-1]==0)v[i]++;
        }
        if(v[i+1]%v[i]==0)v[i+1]++;
    }
    For(i,n)cout<<v[i]<<" ";
    cout<<'\n';

    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}