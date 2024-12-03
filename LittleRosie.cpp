#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pair<int,int>> vp;
#define Mod 1000000007
#define endl "\n"
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define RSORT(x) sort(x.rbegin(),x.rend());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    int a,b; cin >> a>>b;
    if(a==0 && b==0){
        cout<<0<<endl;
        return;
    }
    int ans=1;
    if((a+(4*b))>=15){
        ans= ceil((a + (4 * b)) / 15.0);
    }
    else {
        ans =1;
    }
    
    cout<<max(ans,b-b/2)<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}