#include<bits/stdc++.h>
using namespace std;
int bestClosingTime(string customers) {
        int n=customers.length();
        vector<int>ans(n+1,0);
        vector<int>pre1N(n);
        pre1N[0]=0;
        int p;
        if(customers[0]=='N'){p=1;ans[n]++;}
        else p=0;
        for(int i=1;i<n;i++){
            pre1N[i]=p;
            if(customers[i]=='N'){p++;ans[n]++;}
        }
        vector<int>sufY(n);
        if(customers[n-1]=='Y')sufY[n-1]=1;
        else sufY[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(customers[i]=='Y')sufY[i]=1;
            sufY[i]+=sufY[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=pre1N[i]+sufY[i];
        }
        // for(int i=0;i<n;i++){
        //     cout<<pre1N[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<sufY[i]<<" ";
        // }
        // cout<<endl;
        int min=10000000;
        for(int i=0;i<=n;i++){
            if(min>ans[i])min=ans[i];
        }
        for(int i=0;i<=n;i++){
            if(min==ans[i])return i;
        }
        return -1;
    }
int main()
{
    string str;
    cin>>str;
    cout<<bestClosingTime(str);
    return 0;
}