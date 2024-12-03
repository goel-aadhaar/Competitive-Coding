#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    
    int cnt0 = count(v.begin() , v.end() , 0);
    int cnt1 = count(v.begin() , v.end() , 1);
    int mx = 0 , i = 0 , j = n - 1;
    while(i < j){
        if(v[i] == 0) cnt0 --;
        else cnt1--;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    