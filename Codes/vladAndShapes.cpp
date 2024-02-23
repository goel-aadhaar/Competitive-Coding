#include<iostream>
#include<string>
#include<vector>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         int brr[x][x];
         for(int j=0;j<x;j++){
             for(int k=0;k<x;k++){
                 cin>>brr[j][k];
             }
         }
         vector<int>v(x,0);
        for(int j=0;j<x;j++){
             for(int k=0;k<x;k++){
                 if(brr[j][k]==1){
                     v[j]++;
                 }
             }
         }
         for(int f=0;f<x;f++){
             for(int g=f+1;g<x;g++){
                if(v[f]==v[g]){
                    cout<<"SQUARE"<<endl;
                    break;
                }
             }
             cout<<"TRIANGLE"<<endl;
             break;
         }
     }
     for(int k=0;k<n;k++){
         cout<<arr[k]<<endl;
     }
     return 0;
 }