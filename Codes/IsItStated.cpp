#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        bool flag=false;
        for(int j=0;j<str.size()-1;j++){
            if(str[j]=='i' && str[j+1]=='t'){flag=true;break;}
        }
        if(flag==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}