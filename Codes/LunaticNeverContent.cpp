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
		int n;
		cin>>n;
		vi v(n);
		for(i,n) cin>>v[i];
		int ans=0;
		int i=0,j=n-1;

		while(i<j){
			if(v[j]==v[i]){
				i++;
				j--;
				continue;
			}
			else {
				ans=abs(v[j]-v[i]);
				break;
			}
		}


		while(i<j){
			if(v[j]==v[i]){
				i++;
				j--;
				continue;
			}
			if(max(abs(v[j]-v[i]),ans)%min(abs(v[j]-v[i]),ans)==0){
				ans=min(abs(v[j]-v[i]),ans);
			}
			else {
				ans=__gcd(ans,abs(v[j]-v[i]));
			}
			j--;
			i++;
		}
		cout<<ans<<endl;



	}
int main(){
	int T;
	cin>>T;
	while(T--){

		solve();
	}
return 0;
}