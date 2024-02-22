#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int crr[n];
    for(int i=0;i<n;i++){
        int x,a,b;
        int count=0;
        int arr[x];
        cin>>x;
        cin>>a;
        cin>>b;
        for(int j=0;j<x;j++){
            cin>>arr[j];
        }
        for(int k=0;k<x;k++){
            for(int t=k+1;t<x;t++){
                if((arr[k]+arr[t])%a==0 && (arr[k]-arr[t])%b==0){
                    count++;
                }
            }
        }
        crr[i]=count;
        
    }
    for(int g=0;g<n;g++){
        cout<<crr[g]<<endl;
    }
    return 0;
}