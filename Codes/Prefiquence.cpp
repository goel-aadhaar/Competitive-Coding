#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;string str;string s;
       cin>>str>>s;
       int count0=0;int count1=0;
       for(int i=0;i<b;i++){
           if(s[i]=='0')count0++;
           else count1++;
           
       }
    //    cout<<count0<<" "<<count1<<endl;
       int count=0;
       int c1=0,c0=0;
       int maxcount=0;
       for(int i=0;i<a;i++){
           if(str[i]=='0'){
               if(c0<count0){
                   count++;
                   c0++;
               }
               else {
                   maxcount=max(count,maxcount);
                //    count=0;
                break;
               }
           }
           else{
               if(c1<count1){
                   count++;
                   c1++;
               }
               else {
                   maxcount=max(count,maxcount);
                //    count=0;
                break;
               }
           }
       }
       maxcount=max(count,maxcount);
       cout<<maxcount<<endl;
       
        
    }
    return 0;
}