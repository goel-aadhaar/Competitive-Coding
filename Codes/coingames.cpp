#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;vector<char>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        int countU=0,countD=0;
        for(int i=0;i<n;i++){
            if(v[i]=='U')countU++;
            else countD++;
        }

        if(countU&1 && countD&1){
            cout<<"YES"<<endl;
        }
        else if(!(countU&1) && !(countD&1)){
            cout<<"NO"<<endl;
        }
        else if(countU&1 && !(countD&1)){
            cout<<"YES"<<endl;
        }
        else if(!(countU&1) && countD&1){
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}