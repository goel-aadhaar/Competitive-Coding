#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0,first1=0,other1=0;
        long long count=0;
        while(i<s.length()){
            if(i!=0 && s[i]=='0' && s[i-1]=='1'){
                count+=i-first1+1;
                s[i]='1';
                s[first1]='0';
                i++;
                first1++;
            }
            else if(s[i]=='0'){
                i++;
            }
            else if(i!=0 && s[i]=='1' && s[i-1]=='0'){first1=i;i++;}
            else i++;
        }
        cout<<count<<endl;
    }
    return 0;
}