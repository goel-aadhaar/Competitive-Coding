#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>v1,vector<int>v2){
    int count=0;
    int i=0;
    int j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            count+=v1.size()-i;
            j++;
        }
        else {
            i++;
        }
    }
    return count;
}
void merge(vector<int>&Va,vector<int>&Vb,vector<int>&v){
    int i=0,j=0,k=0;
    while(i<Va.size() && j<Vb.size()){
        if(Va[i]<Vb[j]){
            v[k]=Va[i];
            i++;
            k++;
        }
        else{
            v[k]=Vb[j];
            j++;
            k++;
        }
    }
    if(i==Va.size()){
            for(int p=j;p<Vb.size();p++){
                v[k]=Vb[p];
                k++;
            }
        }
    else if(j==Vb.size()){
        for(int p=i;p<Va.size();p++){
            v[k]=Va[p];
            k++;
        }
    }
}
int mergeSort(vector<int>&v){
    int c=0;
    int n=v.size();
    if(n==1)return 0;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>v1(n1),v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[i+n1];
    }
    c+=mergeSort(v1);
    c+=mergeSort(v2);

    c+=inversion(v1,v2);

    merge(v1,v2,v);
    
    v1.clear();
    v2.clear();

    return c;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<mergeSort(v);
    
    return 0;
}