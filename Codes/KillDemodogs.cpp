#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
const int M = 1000000007;

int binExp(int a, int b, int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=(res*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return res;
}
int main(){
    int T;
    cin>>T;
    ll mod3=binExp(3,1000000005,1000000007);
    ll mod2=binExp(2,1000000005,1000000007);
    // cout<<mod3<<" "<<mod2<<endl;
    while(T--){
        int n;
        cin>>n;
        ll ans=((((1ll*n*((n+1)) % M)*(1ll*2*n+1) )%M)*mod3)%M - (((1ll*n*(n+1))%M)*mod2)%M;
        if(ans<0) ans+=M;
        cout<<(ans*2022)%M<<'\n';
    }
return 0;
}