#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    int cntA = 0 , cntB = 0;
    for(int i = 0; i < n; i ++){
        if(s[i] == 'A') cntA++;
        else cntB++;
    }
    int cnt = 0;
    int times = 0;
    while(cnt < n){
        int i = 0 , j = 1;
        if(cntB == 0) {
            cout << times + cntA << endl;
            return;
        } else if(cntA == 0){
            cout << times + cntB << endl;
            return;
        }
        bool flag = false;
        while(i < n && j < n){
            if(s[i] == '0'){
                i++;
                continue;
            } else if(s[j] == '0'){
                j++;
                continue;
            } else if(s[i] == s[j]){
                j++;
                continue;
            } else {
                flag = true;
                if(s[i] == 'A') cntA--;
                else cntB--;
                
                s[i] = '0';
                i = j;
                j++;
                cnt ++;
            }
        }
        if(s[i] == 'A') cntA--;
        else cntB--;
        if(cntB == 0) {
            times += cntA;
            if(flag) times ++;
            cout << times << endl;
            return;
        } else if(cntA == 0){
            times += cntB;
            if(flag) times ++;
            cout << times << endl;
            return;
        }
        s[i] = '0';
        times ++;
        // cout << "v" << endl;
        cnt++;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}