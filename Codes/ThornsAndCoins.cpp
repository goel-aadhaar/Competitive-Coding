#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int count=0,x;
        cin>>x;
        char brr[x];
        for(int j=0;j<x;j++) cin>>brr[j];
        int k=0;
        while(k<x-1){
            if(brr[k+1]=='@') {
                count++;
                // cout<<k;
                // cout<<count<<endl;
                k++;
                continue;
            }
            else if(brr[k+2]=='@') {
                count++;
                // cout<<k;
                // cout<<count<<endl;
                k+=2;
                continue;
            }
            if(brr[k+1]=='.') {
                // cout<<k;
                // cout<<count<<endl;
                k++;
                continue;
            }
            else if(brr[k+2]=='.') {
                // cout<<k;
                // cout<<count<<endl;
                k+=2;
                continue;
            }
            else break;
        }
        arr[i]=count;
    }
    for(int t=0;t<n;t++){
        cout<<arr[t]<<endl;
    }
    
    return 0;
}