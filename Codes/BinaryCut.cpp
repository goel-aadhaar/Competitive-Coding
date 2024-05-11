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
    string num;
    cin>>num;
    int count=0;bool flag=true;
    int i=0;
    while(i<num.length()){
        if((num[i]=='0' && num[i+1]=='1')){
            count++;
            flag=false;
        }
        else if((num[i]=='1' && num[i+1]=='0')){
            count++;
        }
        i++;
    }
    if(flag==false){
        count-=1;
    }
    cout<<count+1<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){

        solve();
    }
return 0;
}