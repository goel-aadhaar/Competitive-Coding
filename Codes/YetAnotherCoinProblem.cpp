#include<iostream>
using namespace std;

int main()
{
    int brr[5]={1,3,6,10,15};
    int t;cin>>t;int arr[t];for(int i=0;i<t;i++)cin>>arr[i];int crr[t];
    for(int i=0;i<t;i++){
        int count=0;
        int j=4;
        while(j>=0 && arr[i]!=0){
            if(arr[i]%brr[j]==arr[i])j--;
            else {
                count+=arr[i]/brr[j];
                arr[i]=arr[i]%brr[j];
                j--;
                }
        }
        crr[i]=count;
    }
    for(int i=0;i<t;i++){
        cout<<crr[i]<<endl;
    }
    return 0;
}