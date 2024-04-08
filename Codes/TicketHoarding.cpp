#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,m,k;
        cin>>n>>m>>k;
        vector<long long>arr(n);
        for(long long j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        if(k<=m){cout<<arr[0]*k<<endl;continue;}
        
        long long sum=0;
        long long step=k/m;
        long long rem=k%m;
        for(long long j=0;j<step;j++){
            if(j==0)sum+=arr[j]*m;
            else {
                sum+=(m*j + arr[j])*m;
            }
        }
        if(rem!=0){sum+=(m*step + arr[step])*rem;}
        cout<<sum<<endl;
    }
    return 0;
}