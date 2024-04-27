#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        char colorh1=v[0][0];
        char colorh2=v[n-1][m-1];
        bool h1=true;
        for(int i=0;i<n-1;i++){
            if(v[i][0]!=v[i+1][0]){
                h1=false;
                break;
            }
        }
        bool h2=true;
        for(int i=0;i<n-1;i++){
            if(v[i][m-1]!=v[i+1][m-1]){
                h2=false;
                break;
            }
        }
        if(h1==true && h2==true && colorh1!=colorh2){
            cout<<"NO"<<endl;
            continue;
        }
        // vertical
        // char colorv1=v[0][0];
        // char colorv2=v[n-1][m-1];
        bool v1=true;
        for(int j=0;j<m-1;j++){
            if(v[0][j]!=v[0][j+1]){
                v1=false;
                break;
            }
        }
        bool v2=true;
        for(int j=0;j<m-1;j++){
            if(v[n-1][j]!=v[n-1][j+1]){
                v2=false;
                break;
            }
        }
        if(v1==true && v2==true && colorh1!=colorh2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        
    }
    return 0; 
}
