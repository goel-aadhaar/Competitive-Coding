#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<k<<endl;
            continue;
        }
        int s=0;
        
        for(int i=1;;i*=2){
            if((i-1)>(k)){
                s=i/2 -1;
                break;
            }
        }
        vector<int>arr(n,0);
        arr[0]=s;
        arr[1]=k-arr[0];

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
   return 0; 
}