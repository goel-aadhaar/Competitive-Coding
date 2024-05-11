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
    int a,b;cin>>a>>b;
    if(a>b){
        cout<<b<<" "<<a<<endl;
    }
    else{
        cout<<a<<" "<<b<<endl;
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