#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int count=0;
    int pe=(si+ei)/2;
    for(int i=si;i<=ei;i++){
        if(arr[pe]>arr[i])count++;
    }
    int pi=si+count;
    swap(arr[pe],arr[pi]);
    int i=si,j=ei;
    while(i<j){
        if(arr[i]<=arr[pi])i++;
        if(arr[j]>=arr[pi])j--;
        else if(arr[j]<arr[pi] && arr[i]>arr[pi]){
            swap(arr[j],arr[i]);
            i++;
            j--;
        }
    }
    return pi;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}