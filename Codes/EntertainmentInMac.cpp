#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    for(int i=0;i<t;i++){
        int n;cin>>n;string s;cin>>s;string p = s;reverse(p.begin(),p.end());
        if(s[0]<s[s.size()-1])str[i]=s;
        else if(s[0]>s[s.size()-1])str[i] = p + s;
        else{
            int a=1,b=s.size()-2;
            while(a<=b){
                if(s[a]<s[b]){str[i]=s;break;}
                else if(s[a]>s[b]){str[i] = p + s;break;}
                else{
                    if(a==b || (a+1)==b){str[i]=s;break;}
                }
                a++;b--;
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}