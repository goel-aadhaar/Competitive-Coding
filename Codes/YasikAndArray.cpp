#include<bits/stdc++.h>
using namespace std;

void solve(int i,int j,vector<int>& v,int *ans){
    int a=i,b=j;                
    while(a<b){if(v[a]<=0)a++;else break;}
    while(a<b){if(v[b]<=0)b--;else break;}
    int sum=0;
    for(int k=a;k<=b;k++) sum+=v[k];
    cout<<a<<" "<<b<<" "<<sum<<endl;
    *ans=max(*ans,sum);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;vector<int>v(n);for(int i=0;i<n;i++) cin>>v[i];
        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }
        int a=-1e4;
        // int *ans=&a;
        int i=0,j=0;
        while(j<n){
            if(j==0)j++;
            if((v[j]+v[j-1])&1)j++;
            else {
                solve(i,j-1,v,&a);
                i=j;
                j++;
            }
        }
        solve(i,j-1,v,&a);
        cout<<a<<endl;
        
    }
    return 0;
}