#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int x;
    cout<<"Enter the number: ";
    int arr[n];int lb,ub;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){lb=mid-1;ub=mid+1;break;}
        else if(arr[mid]>x){hi=mid-1;}
        else {lo=mid+1;}
    lb=hi;ub=lo;
    }
    
}