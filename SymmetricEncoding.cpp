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
    int n; cin >> n; string s;
    cin>>s;
    vector<char> v;
    For(i,n){
        v.push_back(s[i]);
    }
    SORT(v);
    v.resize(unique(v.begin(), v.end()) - v.begin());
    int m = v.size();

    for(int i=0;i<n;i++){
        auto it = find(v.begin(),v.end(), s[i]);
        int idx = distance(v.begin(), it);
        s[i]= v[m -1 - idx];
    }
    For(i,n){
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}