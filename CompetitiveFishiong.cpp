#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n , k;
    cin >> n;
    string s;
    cin >> s;
    vector<int> pa(n) , pb(n);
    if(s[0] == '0') pa[0] = 1;
    else pb[0] = 1;
    for(int i = 1; i < n ; i ++){
        pa[i] = pa[i - 1];
        pb[i] = pb[i - 1];
        if(s[i] == '0') pa[i]++;
        else pb[i]++;
    }
    int lo = 1 , hi = n;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        int a = 0 , b = 0;
        int i = 0 , mul = 0;
        while(i < n && s[i] == '0') i++;
        if(i > 0) mid--;
        
        
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    