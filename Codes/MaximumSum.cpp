#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long sum2=0,sum1=0;
        for(int i=0;i<2*k;i++) sum2+=v[i];
        for(int i=n-1;i>=n-k;i--) sum1+=v[i];
        long long sumFirst=0;
        if(sum1>sum2) for(int i=2*k;i<n;i++) sumFirst+=v[i];
        else for(int i=0;i<n-k;i++) sumFirst+=v[i];
        
        int count=0,i=0,j=n-1;
        while(count<k){
            if((v[i]+v[i+1])<v[j]){v[i]=0;v[i+1]=0;i+=2;count+=1;}
            else{v[j]=0;j-=1;count+=1;}
        }

        long long sum=0;
        for(int i=0;i<n;i++) sum+=v[i];
        
        cout<<max(sum,sumFirst)<<endl;;
    }
    return 0; 
}
