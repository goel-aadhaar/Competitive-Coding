#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define pb push_back
#define for(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
void solve(){
    int n,q,c;
    cin>>n>>q>>c;
    int stars[n][3];
    for(i,n){
        for(j,3){
            cin>>stars[i][j];
        }
    }
    int views[q][5];
    for(i,q){
        for(j,5){
            cin>>views[i][j];
        }
    }
    ll sum=0;
    for(i,q){
        sum=0;
        for(j,n){
            if(stars[j][0]>=views[i][1] && stars[j][1]>=views[i][2] && stars[j][0]<=views[i][3] && stars[j][1]<=views[i][4]){
                // if((stars[j][2]+views[i][0])<=c)sum+=(stars[j][2]+views[i][0]);
                // else {
                //     ll num = (views[i][0])%(c+1) + stars[j][2];
                //     if(num>c){
                //         num=(num%c) -1;
                //     }
                //     sum+=num;
                // }
                // 
                if(views[i][0]<=(c-stars[j][2])) sum+=(stars[j][2]);
	            else{
	                int a=((views[i][0]-(c-stars[j][2]))%(c+1)-1);
	                if(a<0) sum+=c;
	                else sum+=a;
                }
        }
        cout<<sum<<endl;
    }
    }


    }
int main(){
    // int T;
    // cin>>T;
    // while(T--){

        solve();
    // }
return 0;
}