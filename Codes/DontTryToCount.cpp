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
    int a,b;cin>>a>>b;
    string x,y;cin>>x>>y;
    int ans =0;int count=0;
    while(x.find(y) == string::npos && count<6){
        x+=x;
        ans++;
        count++;
    }
    if(x.find(y) == string::npos){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}