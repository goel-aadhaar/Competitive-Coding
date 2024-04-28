#include<bits/stdc++.h>
using namespace std;
void prefixSum(vector<int>&v,int start,int end,vector<int>&ans){
    int max=0;
    for(int i=start;i<=end;i++){
        max+=v[i];
    }
    if(v[end-1]<0)max-v[end-1];
    ans.push_back(max);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>ans;
        int start=0,end=0;int i=0;
        while(i<n){
            if((v[i]+v[i+1])&1)i++;
            else {
                end=i;
                prefixSum(v,start,end,ans);
                start=i+1;
                i++;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<prefixSum[i]<<" ";
        // }
        // cout<<endl;
        // int maxi=INT_MIN;
        // int maxdx=-1;
        // for(int i=0;i<n;i++){
        //     if(maxi<prefixSum[i]){
        //         maxi=prefixSum[i];
        //         maxdx=i;
        //     }
        // }
        // // cout<<max<<endl;
        // bool flag=true;
        // int idx=0;
        // for(int i=0;i<maxdx;i++){
        //     if((v[i]+v[i+1])&1)continue;
        //     else {
        //         idx=i;
        //         flag=false;
        //     }
        // }
        // // cout<<idx<<endl;
        // int negativeNum=0;
        // if(flag==false){
        //     for(int i=idx+1;i<maxdx;i++){
        //         if (prefixSum[i]<0)negativeNum=prefixSum[i];
        //     }
        // }
        // else {
        //     for(int i=idx;i<maxdx;i++){
        //         if (prefixSum[i]<0)negativeNum=prefixSum[i];
        //     }
        // }
        // cout<<max(maxi-negativeNum,maxEle)<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        cout<<*max_element(ans.begin(),ans.end())<<endl;
    }
    return 0; 
}
