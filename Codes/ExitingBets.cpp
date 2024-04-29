#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(a>b){
            cout<<a-b<<" ";
            cout<<min(a%(a-b),(a-b)-a%(a-b))<<endl;
        }
        else {
            cout<<b-a<<" ";
            cout<<min(b%(b-a),(b-a)-b%(b-a))<<endl;
        }
    }
    return 0; 
}