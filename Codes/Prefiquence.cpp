#include<bits/stdc++.h>
bool counter(string s,int k,int n,char ch,int *pt){
    for(int i=k;i<n;i++){
           if(s[i]==ch){pt=i;return true;}
        }
        return false;
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;string str;string s;
       cin>>str>>s;
       int count=0;
int *pt=0;
       int maxcount=0;
       for(int i=0;i<a;i++){
           if(counter(s,pt,b,str[i],&pt)){
                   count++;
               }
            else {
                   maxcount=max(count,maxcount);
                break;
            }
       }
       maxcount=max(count,maxcount);
       cout<<maxcount<<endl;
       
        
    }
    return 0;
}