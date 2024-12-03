#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    if(s.length() == 1 || (s.length() == 2 && s[0] != s[1])){
        cout << -1 << endl;
        return;
    }
    for(int i = 0 ; i < s.length() - 1; i++){
        if(s[i] == s[i + 1]){
            cout << s[i] << s[i] << endl;
            return;
        }
    }
    bool flag = false;
    for(int i = 0; i < s.length() - 2; i++){
        if(s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]){
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            return;
        }
    }
    cout << -1 << endl;
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    