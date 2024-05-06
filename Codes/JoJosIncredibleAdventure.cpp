#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define Forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define Forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 

void rotateStringLeft(string& s, int k) {
    s = s.substr(k) + s.substr(0, k);
    return;
}
void solve(){
    string s;
    cin>>s;
    // cout<<rotate(s);
    string str=s;
    sort(str.begin(),str.end());
    if(str[0]==str[str.length()-1]){
        if(str[0]=='1'){
            cout<<(1LL*(str.length()))*(1LL*str.length())<<endl;
            return;
        }
        else{
            cout<<0<<endl;
            return;
        }
    }
    int countL=0;
    For(i,s.length()){
        if(s[i]!='0'){
            countL++;
        }
        else break;
    }
    rotateStringLeft(s,countL);
    
    // 10111
    int maxi=1;
    int maxLength=1;
    bool flag=false;

    For(i,s.length()-1){
        if(s[i]=='1' && s[i]==s[i+1]){
            maxi++;
        }
        else {
            maxLength=max(maxi,maxLength);
            maxi=1;
        }
    }
    maxLength=max(maxi,maxLength);
    // cout<<maxLength<<endl;
    if(maxLength&1){
        cout<<(1LL*(maxLength/2 +1))*(1LL*(maxLength/2 +1))<<endl;
    }
    else {
        cout<<(1LL*(maxLength/2))*(1LL*(maxLength/2 + 1))<<endl;
    }


    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}