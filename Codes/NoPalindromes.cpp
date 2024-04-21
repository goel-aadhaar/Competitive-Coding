#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string S){
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        if(!isPalindrome(s)){
            cout<<"YES"<<endl<<1<<endl<<s<<endl;            
            continue;
        }

        if(equal(s.begin() + 1, s.end(), s.begin())){
            cout<<"NO"<<endl;
            continue;
        }
        else cout<<"YES"<<endl;
        
        int lo=0,hi=s.length()-1;
        string h="";
        if(s[hi]==s[hi-1]){
            int k=hi-1;
            for(int i=hi;i>=0;i--){
                if(s[hi]!=s[k]){
                    for(int q=k;q<=hi;q++){
                        h+=s[k];
                    }
                    hi=k-1;
                    break;
                }
                else {
                    k--;
                }
            }
        }
        int unique=1;
        string str="";
        int i=lo+1;
        
        while(lo<=hi){
            if(s[lo]!=s[i]){
                for(int j=lo;j<=i;j++){
                    str+=s[j];
                }
                cout<<str<<" ";
                str="";
                lo+=2;
                i=lo+1;
            }
            else {
                i=lo+1;
                i++;
            }
        }
    }
   return 0; 
}