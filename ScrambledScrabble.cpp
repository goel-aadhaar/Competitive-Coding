#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    vector<int> con , vow , ng , y;
    for(char &a : s){
        if(a == 'A' || a == 'E' || a == 'I' || a == 'I' || a == 'U') vow.push_back(a);
        else if(a == 'Y') y.push_back(a);
        else if(a == 'N' || a == 'G') ng.push_back(a);
        else con.push_back(a);
    }
    int len = 0;
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    