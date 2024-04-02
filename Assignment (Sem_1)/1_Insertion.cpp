#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];int maximum=arr[0],minimum=arr[0],sum=arr[0];float average=arr[0];int mode=arr[0],count=1;
    cout<<"min,max,sum,average and mode after addition of "<<arr[0]<<"is"<<minimum<<","<<maximum<<","<<sum<<","<<average<<","<<mode<<endl;
    for(int i=1;i<n;i++){
        minimum=min(minimum,arr[i]);
        maximum=max(maximum,arr[i]);
        sum+=arr[i];
        count++;
        average=(float)sum/count;
        sort(arr,arr+i);
        int max_freq=1,freq=1;
        for(int j=0;j<i;j++){
            if (arr[j]==arr[j+1]) freq++;
            else {
                if (freq>max_freq) {
                    max_freq=freq;
                    mode=arr[j];
                }
            }
        }
        cout<<"min,max,sum,average and mode after addition of "<<arr[i]<<"is"<<minimum<<","<<maximum<<","<<sum<<","<<average<<","<<mode<<endl;
    }
    return 0;
}