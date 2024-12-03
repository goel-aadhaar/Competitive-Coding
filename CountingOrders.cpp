#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    int n;cin>>n;
    vi a(n);vi b(n);
    For(i,n)cin>>a[i];For(i,n)cin>>b[i];
    SORT(a);SORT(b);
    ll sum=1;
    For(i,n){
        ll count=0;
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            // cout<<mid<<" ";
            if(a[i]>b[mid])lo=mid+1;
            else hi=mid-1;
        }
        count=hi+1-i;
        sum=((sum%Mod)*(count%Mod))%Mod;
    }
    cout<<sum<<endl;



    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}