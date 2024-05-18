#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define endl "\n"
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 
void solve(){
    // int n; cin >> n; vi v(n);
    // Your code logic here
    int a,b,c;
    cin>>a>>b>>c;
    int count =0;
    while ((a>0 && b>0) || (b>0 && c>0) || (c>0 && a>0)) {
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if (a>b) swap(a,b);
        if(b> 0 && c> 0) {
            b--;
            c--;
            count++;
        } else {
            break;
        }
    }

    // cout << count << endl;


    // cout<<a<<" "<<b<<" "<<c<<" ";
    if(a&1 || b&1 || c&1){
            cout<<-1<<endl;
        }
    else{
        cout<<count<<endl;
    }

}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}