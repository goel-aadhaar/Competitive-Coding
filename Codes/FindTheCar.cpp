#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    ll n,k,q;cin>>n>>k>>q;
    vi a(k+1);vi b(k+1);a[0]=0;b[0]=0;
    for(int i=1;i<=k;i++)cin>>a[i];
    for(int i=1;i<=k;i++)cin>>b[i];
    vi query(q);
    for(int i=0;i<q;i++)cin>>query[i];
    for(int i=0;i<q;i++){
        ll x=0;
        int lo=0,hi=k;int mid;
        bool flag=true;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(a[mid]==query[i]){
                flag=false;
                x=b[mid];
                break;
                }
            else if(a[mid]>query[i])hi=mid-1;
            else lo=mid+1;
        }
        if(flag==false){
            cout<<x<<" ";
        }
        else{
            x=b[hi];
            x+=((query[i]-a[hi])*(b[hi+1]-b[hi]))/(a[hi+1]-a[hi]);
            cout<<x<<" ";
        }
    }
    cout<<'\n';
    return;

    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}