#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    int brr[b];
    int crr[b];
    for(int i=0;i<a;i++) cin>>arr[i];
    for(int i=0;i<b;i++) cin>>brr[i];
    
    sort(arr,arr+a);
    // for(int i=0;i<a;i++) cout<<arr[i];
    for(int i=0;i<b;i++){
        int low=0,high=a-1,mid;
        
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]<=brr[i]){
                low=mid;
                // cout<<mid<<endl;
            }
            else{
                high=mid-1;
                // cout<<mid<<endl;
            }
            crr[i]=mid;
        }
    }
    for(int i=0;i<b;i++) cout<<crr[i];
    
    return 0;
}