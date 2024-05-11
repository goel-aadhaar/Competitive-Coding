#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
bool isSorted(string& str) {
    for (int i = 1; i < str.length(); ++i) {
        if (str[i] < str[i - 1]) {
            return false;
        }
    }
    return true;
}
void solve(){
    
    string s;
    cin>>s;
    string str=s;
    sort(str.begin(),str.end());
    if(str[0]==str[str.size()-1]){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        if(isSorted(s)){
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else {
            cout<<str<<endl;
        }
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