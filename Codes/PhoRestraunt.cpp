#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n;cin>>n;int arr[n];int sum=0;int count=0;
    for(int i=0;i<n;i++){
        vector<int>v;
        for(;;){
            char x;cin>>x;
            if(x==10)break;
            v.push_back(x-48);
        }
        
        int count0=0,count1=0;
        for(int j=0;j<v.size();j++){
            if(v[j]==0)count0++;
            else count1++;
        }
        if(count0<=count1)sum+=count0;
        else sum+=count1;
        count++;
        if(count==n)break;
    }
    cout<<sum<<endl;
    return 0;
}