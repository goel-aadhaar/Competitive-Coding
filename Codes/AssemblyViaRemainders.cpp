#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n-1);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        vector<int>ans(n);
        ans[0]=v[0]+1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+v[i-1];
            if(i<=(n-2) && ans[i]<=v[i]){
                while(ans[i]<=v[i]){
                    ans[i]*=2;
                    ans[i]-=v[i-1];
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}