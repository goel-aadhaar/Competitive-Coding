#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>v(26,0);
        int count=0;
        
        for(int i=0;i<s.length();i++){
            if(v[(int)s[i]-97]==0){
                v[(int)s[i]-97]++;
                count++;
            }
            else break;
        }
        int t_count=0;
        int j=count;
        bool flag=true;
        while(s[j]!='\0'){
            if(s[j]==s[j-count])j++;
            else {
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
   return 0; 
}