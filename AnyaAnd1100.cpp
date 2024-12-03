#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<pair<int , int>> v(n);
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        if(s[i] == '1'){
            if(i + 3 < n && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') ans.push_back(i) , i += 2;
        }
    }
    for(int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        a--;
        if(s[a] - '0' != b){
            
        } else {
            if(!ans.empty()){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    