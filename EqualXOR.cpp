#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
// #define pb push_back
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
void solve(){
    int n,k;
    cin>>n>>k;
    vi v1(n),v2(n);
    for(int i=0;i<n;i++) cin>>v1[i];      for(int i=0;i<n;i++) cin>>v2[i];
    sort(v1.begin(),v1.end());            sort(v2.begin(),v2.end());
    vi count1(n,0);                       vi count2(n,0);
    For(i,n) count1[v1[i]-1]++;             For(i,n) count2[v2[i]-1]++;
    int c1=0,c2=0;
    vi v1ans,v2ans;
    int i=0;
    while(i<n){
        if(count1[i]==2 && c1<2*k){
            v1ans.push_back(i+1);
            v1ans.push_back(i+1);
            c1+=2;
        }
        else if(count2[i]==2 && c2<2*k){
            v2ans.push_back(i+1);
            v2ans.push_back(i+1);
            c2+=2;
        }
        i++;
    }
    if(c1<2*k){
        int j=0;
        while(c1<2*k){
            if(count1[j]==1){
                v1ans.push_back(j+1);
                v2ans.push_back(j+1);
                c1++;
            }
            j++;
        }
    }
    for(int i=0;i<2*k;i++){
        cout<<v1ans[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<2*k;i++){
        cout<<v2ans[i]<<" ";
    }
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