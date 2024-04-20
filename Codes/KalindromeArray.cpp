#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1 || n==2 || n==0){
            cout<<"YES"<<endl;
            continue;
        }
        int lo=0,hi=n-1;
        int x1=-1,x2=-1;
        while(lo<hi){
            if(arr[lo]==arr[hi]){
                lo++;
                hi--;
            }
            else{
                x1=arr[lo];
                x2=arr[hi];
                break;
            }
        }
        bool flag=true;
        while(lo<hi){
            if(arr[lo]==arr[hi]){
                lo++;
                hi--;
                continue;
            }
            if(arr[lo]==x1){lo+=1;continue;}
            if(arr[hi]==x1){hi-=1;continue;}
            if(arr[lo]!=arr[hi]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            continue;
        }
        
        flag=true;
        lo=0;
        hi=n-1;
        while(lo<hi){
            if(arr[lo]==arr[hi]){
                lo++;
                hi--;
                continue;
            }
            if(arr[lo]==x2){lo++;continue;}
            if(arr[hi]==x2){hi--;continue;}
            if(arr[lo]!=arr[hi]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0; 
}