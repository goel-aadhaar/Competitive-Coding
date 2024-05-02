#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(vector<ll>& v,ll c, int n){
    ll lo=1,hi=sqrt(c);
    while(lo<=hi){
      ll mid=lo+(hi-lo)/2;
      ll product=0;
      for(int i=0;i<n;i++){
          product+=pow((2*mid +v[i]),2);
      }
      if(product==c){cout<<mid<<endl;return;}
      else if(product<c) lo=mid+1;
      else hi=mid-1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        ll c;cin>>c;vector<int>v(n);for(int i=0;i<n;i++) cin>>v[i];
        solve(v,c,n);
        
    }
    return 0;
}