#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a>b){
            if(b>(a+b)/3)cout<<(a+b)/3<<endl;
            else cout<<b<<endl;
        }
        else {
            if(a>(a+b)/3)cout<<(a+b)/3<<endl;
            else cout<<a<<endl;
        }
    }
    return 0; 
}
