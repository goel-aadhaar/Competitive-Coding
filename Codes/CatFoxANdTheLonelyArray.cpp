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
    int n; cin >> n; vi v(n);For(i,n)cin>>v[i];
    // int lo =1,hi =n;
    // while(lo<=hi){
    //     int mid =lo+(hi-lo)/2;
    //     bool temp = true;
    //     bool flag =false;
    //     int preOr =0;
    //     for(int i=0;i<=n-mid;i++){
    //         int orv = 0;
    //         for(int j=i;j<i+mid;j++) orv = orv | v[j];
    //         if(flag == false) {
    //             preOr = orv;
    //             flag = true;
    //         }
    //         else{
    //             if(orv!=preOr){
    //                 temp = false;
    //                 break;
    //             }
    //         }
    //     }
    //     if(temp == false) lo = mid+1;
    //     else hi =mid -1;
    // }
    // cout<<lo<<endl;
    int maxi =1;
    for(int i=0;i<=20;i++){
        int ed=0;int sum=0;
        for(int j=0;j<n;j++){
            if((v[j]>>i)&1){
                maxi = max(maxi, ed+1);
                ed=0;
            }
            else{
                ed++;sum++;
            }
        }
        if(sum!=n)maxi = max(maxi, ed+1);
    }
    cout<<maxi<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}

