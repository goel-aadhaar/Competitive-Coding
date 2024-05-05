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
void solve(){
    int n;cin>>n;
    char ch;cin>>ch;
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
        return;
    }
    string str=s;
    sort(str.begin(),str.end());
    if(str[0]==str[n-1]){
        cout<<0<<endl;
        return;
    }

    for(int i=n/2;i<n;i++){
        if(s[i]==ch){
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}