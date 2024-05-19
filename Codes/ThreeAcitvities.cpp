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
void findThreeMaxElements(vi &arr, int n, vi &x) {
    int firstMax=-1,secondMax=-1,thirdMax=-1;
    for (int i = 0; i < n; i++) {
        if (firstMax==-1 || arr[i] > arr[firstMax]) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = i;
        }
        else if (secondMax==-1 || arr[i] > arr[secondMax]) {
            thirdMax = secondMax;
            secondMax = i;
        }
        else if (thirdMax==-1 || arr[i] > arr[thirdMax]) {
            thirdMax = i;
        }
    }
    x.push_back(firstMax);
    x.push_back(secondMax);
    x.push_back(thirdMax);
}
void solve(){
    int n; cin >> n; vi a(n);vi b(n);vi c(n);
    For(i,n)cin>>a[i];For(i,n)cin>>b[i];For(i,n)cin>>c[i];
    vi max_a;
    vi max_b;
    vi max_c;
    findThreeMaxElements(a,n,max_a);
    findThreeMaxElements(b,n,max_b);
    findThreeMaxElements(c,n,max_c);
    int ans=0;
    For(i,3){
        For(j,3){
            For(k,3){
                if(max_a[i]!=max_b[j] && max_b[j]!=max_c[k] && max_a[i]!=max_c[k]){
                    ans = max(ans,a[max_a[i]]+b[max_b[j]]+c[max_c[k]]);
                }
            }
        }
    }
    cout<<ans<<endl;

}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}