#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<int>v1(n);vector<int>v2(n);vector<int>v3(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];
        for(int i=0;i<n;i++) cin>>v3[i];
        int num=0;
        bool flag=false;
        int i=0;
        while(i<n){
            if(num==x){flag=true;break;}
            if((v1[i] | x)==x){
                num=num|v1[i];
                // cout<<num<<endl;
                i++;
            }
            else break;
        }
        if(flag==true){cout<<"Yes"<<endl;continue;}
        i=0;
        while(i<n){
            if(num==x){flag=true;break;}
            if((v2[i] | x)==x){
                num=num|v2[i];
                // cout<<num<<endl;
                i++;
            }
            else break;
        }
        if(flag==true){cout<<"Yes"<<endl;continue;}
        i=0;
        while(i<n){
            if(num==x){flag=true;break;}
            if((v3[i] | x)==x){
                num=num|v3[i];
                // cout<<num<<endl;
                i++;
            }
            else break;
        }
        if(num==x){flag=true;}
        
        if(flag==true){cout<<"Yes"<<endl;continue;}
        cout<<"No"<<endl;
    }
    return 0;
}