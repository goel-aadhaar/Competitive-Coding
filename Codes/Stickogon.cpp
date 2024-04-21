#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>vr(100,0);
        for(int i=0;i<n;i++){
            vr[v[i]-1]++;
        }
        for(int i=0;i<100;i++){
            if(vr[i]>2){
                count+=vr[i]/3;
            }
        }
        cout<<count<<endl;
    }
    return 0; 
}