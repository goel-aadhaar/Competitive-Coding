#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    int n;cin>>n;
    vi a(n);
    vi b(n);
    For(i,n)cin>>a[i];
    For(i,n)cin>>b[i];
    int i=0;
    while(i<n){
        if(a[i]==b[i])i++;
        else break;
    }
    int j=n-1;
    while(j>=0){
        if(a[j]==b[j])j--;
        else break;
    }
    while(i>0){
        if(b[i]>=b[i-1])i--;
        else break;
    }
    while(j<n-1){
        if(b[j]<=b[j+1])j++;
        else break;
    }
    cout<<i+1<<" "<<j+1<<'\n';

    }
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}