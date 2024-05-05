#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define Forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define Forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}
bool sortByFirst(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first < b.first;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<pair<int,int>>p(n);
    vector<pair<int,int>>ans(n);
    vector<ll>prefixSum(n);
    
    for(int i=0;i<n;i++){
        p[i].first=i;
        p[i].second=v[i];
    }
    sort(p.begin(),p.end(),sortBySecond);
    prefixSum[0]=p[0].second;
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+p[i].second;
    }
    // for(int i=0;i<n;i++)cout<<prefixSum[i]<<" "<<p[i].second<<endl;
    // for(i,n)cout<<p[i].first<<" "<<p[i].second<<endl;
    ll sum=0;
    int count=0;
    // for(i,n){
        // sum=p[i].second;
        // cout<<sum<<endl;
        // count=0;

        // int lo=0,hi=n-1;
        // while(lo<=hi){
        //     int mid = lo+(hi-lo)/2;
        //     if(mid>=i){
        //         if(prefixSum[mid]>=p[mid+1].second)lo=mid+1;
        //         else hi=mid-1;
        //     }
        //     else{
        //         if(prefixSum[mid]+p[i].second>=p[mid+1].second)lo=mid+1;
        //         else hi=mid-1;
        //     }
        // }
        ans[n-1].second=n-1;
        ans[n-1].first=p[n-1].first;
        count=n-1;
        int diff=0;
        for(int i=n-2;i>=0;i--){
            if(prefixSum[i]>=p[i+1].second){
                ans[i].second=count;
                diff+=1;
            }
            else {
                count-=1+diff;
                ans[i].second=count;
                diff=0;
            }
        ans[i].first=p[i].first;
    }
    sort(ans.begin(),ans.end(),sortByFirst);
    for(int i=0;i<n;i++)cout<<ans[i].second<<" ";
    cout<<endl;

}
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}