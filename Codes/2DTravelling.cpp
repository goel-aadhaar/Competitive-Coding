#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        ll pricea=1e17,priceb=1e17;
        cin>>n>>k>>a>>b;
        vector<ll>x(n+1),y(n+1);
        for(int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        
        ll price=abs(x[a]-x[b])+abs(y[a]-y[b]);
        for(int i=1;i<=k;i++){
            pricea=min(pricea,abs(x[a]-x[i])+abs(y[a]-y[i]));
            priceb=min(priceb,abs(x[b]-x[i])+abs(y[b]-y[i]));
            
        }
        cout<<min(price,pricea+priceb)<<endl;
    }
        
     return 0;
     }
     