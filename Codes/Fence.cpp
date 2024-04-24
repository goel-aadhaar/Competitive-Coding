#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long >v1(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    
    vector<int>v2(n,0);
    for(int i=0;i<k;i++){
        v2[0]+=v1[i];
    }
 
    for(int i=1;i<n-k+1;i++){
        v2[i]=v2[i-1]-v1[i-1]+v1[i+k-1];
    }
 
    int min=v2[0];
    int minDex=0;
    for(int i=0;i<n-k+1;i++){
        if(min>v2[i]){
            min=v2[i];
            minDex=i;
        }
    }
    cout<<minDex+1;
    return 0; 
}