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
    set<char> charSet(s.begin(),s.end());
    vc str;
    for (char c : charSet) {
        str.push_back(c);
    }
    vc r(26);int j= str.size()-1;
    for(int i =0 ;i<str.size();i++){
        r[str[i] -'a'] = str[j];
        j--;
    }
    vc ans;
    for(int i=0;i<s.size();i++){
        ans.push_back(r[s[i]-'a']);
    }
    for(int i=0;i<s.size();i++){
        cout<<ans[i];
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