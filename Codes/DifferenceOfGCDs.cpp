#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define Forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    
    vector<int>v(n);
    ll ans=0;
    
    v[0]=l;
    for(int i=1;i<n;i++){
        ans=l;
        if(ans%(i+1)!=0){
            ans=l+(i+1-(l%(i+1)));
        }
        if(ans>r){
            cout<<"NO"<<endl;
            return;
        }
        v[i]=ans;
    }
    cout<<"YES"<<endl;
    For(i,n){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}

