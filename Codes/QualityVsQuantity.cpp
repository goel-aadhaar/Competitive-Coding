#include<iostream>
#include<climits>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
// int max(int crr[],int size){
//     int max=crr[0];
//     int y =0;
//     for(int i=0;i<=size-1;i++){
//         if(max<crr[i]){
//             max=crr[i];
//             crr[i]=INT_MIN;
//         }
//     }
//     return max;
// }
int main(){
    
    int n;
    cin>>n;
    int x;
    long trr[n];
    long e;
    long prr[n];

    for(int i=0;i<n;i++){
        long sum=0,sumW=0;
        cin>>x;
        vector<long>v;
        for(int j=0;j<x;j++){
            long num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end(),greater<long>());
        for(int d=0;d<x-1;d++){
            if(v.at(d)==v.at(d+1)){
                e=1;
            }
            else{
                e=0;
                break;
            }
        }
        if(e==1){
            for(int f=0;f<x;f++){
            v.at(f)=1;
        }
        }

        if(x%2==0){
            // for(int k=0;((k<x/2) -1);k++){
            //     sum=sum +max(arr,x);
            //     count++;
            // }
            // for(int k=x/2;k<x;k++){
            //     sumW=sumW +max(arr,x);
            //     countW++;
            // }
            for(int k=0;k<((x/2) -1);k++){
                sum=sum +v.at(k);
            }
            for(int k=((x/2)-1);k<x;k++){
                sumW=sumW +v.at(k);
            }

        }
        else{
            // for(int k=0;k<x/2;k++){
            //     sum=sum +max(arr,x);
            //     count++;
            // }
            // for(int k=x/2 +1;k<x;k++){
            //     sumW=sumW +max(arr,x);
            //     countW++;
            // }
            for(int k=0;k<x/2;k++){
                sum=sum +v.at(k);
            }
            for(int k=x/2;k<x;k++){
                sumW=sumW +v.at(k);
            }
        }
        
        if(sum>sumW){
            // cout<<"YES";
            trr[i]=1;
        }
        else{
            trr[i]=0;
            // cout<<"NO";
        }

    }
    for(int h=0;h<n;h++){
        if(trr[h]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}