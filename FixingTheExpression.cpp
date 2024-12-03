#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    if(a == b){
        cout << a << "=" << b << endl;
    } else if(a < b){
        cout << a << "<" << b << endl;
    } else {
        cout << a << ">" << b << endl;
    }   
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    