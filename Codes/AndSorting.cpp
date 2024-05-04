#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int andMx=0;bool flag=true;
        for(int i=0;i<n;i++){
            if(i!=v[i] && flag==true){
                andMx=v[i];
                // cout<<andMx<<endl;
                flag=false;
            }
            else if(i!=v[i]){
                // cout<<i<<endl;
                andMx=andMx&v[i];
            }
        }
        cout<<andMx<<endl;
    }
    return 0;
}