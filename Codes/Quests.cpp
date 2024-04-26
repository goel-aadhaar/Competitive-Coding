#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n),brr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>brr[i];
        vector<int>Max(min(n,k));
        
        vector<int>prefixSum(n);
        prefixSum[0]=arr[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+arr[i];
        }
        // int maxbrr=findMax(brr,0,i+1);
        int maxbrr=brr[0];
        for(int i=0;i<min(n,k);i++){
            maxbrr=max(maxbrr,brr[i]);
            int mul=(k-(i+1));
            Max[i]=prefixSum[i]+mul*maxbrr;
            // cout<<">"<<i<<">"<<maxbrr<<">"<<mul<<" "<<max[i]<<endl;
        }
        int maxi = Max[0];
        for(int i=1;i<min(n,k);i++){
            if(maxi<Max[i])maxi=Max[i];
        }
        cout<<maxi<<endl;
    }
    return 0; 
}
