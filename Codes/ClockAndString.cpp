#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // if(((min(c,d) < min(a,b) || min(c,d)>max(a,b)) && (max(c,d) < min(a,b) || max(c,d)>max(a,b))) || ((min(a,b)<min(c,d) && max)) ){
    //     cout<<"NO"<<endl;
    // }
    if((min(a,b)>min(c,d) && min(a,b)<max(c,d)) ){
        if(max(a,b)>max(c,d)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if((max(a,b)>min(c,d) && max(a,b)<max(c,d))){
        if(min(a,b)<min(c,d)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}