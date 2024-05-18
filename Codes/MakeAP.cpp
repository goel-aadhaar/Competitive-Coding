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
    if((c-b)%a ==0 && (c-b)/a >=0 && b!=c){
        YES
    }
    else if((a+c)%2*b ==0 && (a+c)/2*b >=0 && a+c !=0){
        YES
    }
    else if((2*b-a)%c ==0 && (2*b-a)/c >=0 && 2*b-a !=0){
        YES
    }
    else if(a==b){
        if(c<a && a%c==0)YES
    }
    else if(b==c){
        if(a<b && b%a==0)YES
    }
    else if(a==c){
        if(b<a && a%b==0)YES
    }
    else NO
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}