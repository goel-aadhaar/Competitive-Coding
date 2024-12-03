#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1 , s2;
    cin >> s1 >> s2;
    if(s1.size() == 1 || s2.size() == 1) {
        cout << -1 << endl;
        return;
    }
    vector<int> cnt1(26 , 0) , cnt2(26 , 0);
    vector<string> result;
    for(char &a : s1) cnt1[a - 'a'] ++;
    for(char &a : s2) cnt2[a - 'a'] ++;
    for(int i = 0; i < 26; i++){
        if(cnt1[i] && cnt2[i]){
            char x = i + 'a';
            // cout << x << endl;
            int j = 1;
            string l = "" , r = "";
            while(j < s1.size() && s1[j] != x) j++;
            if(j == s2.size()) continue;
            l += s1.substr(0 , j);
            j = s2.size() - 2;
            while(j >= 0 && s2[j] != x) j--;
            if(j == -1) continue;
            j++;
            while(j < s2.size()) r += s2[j] , j++;
            if(l.size() && r.size()){
                string ans = l + x + r;
                result.push_back(ans);
            }
        }
    }
    
    if(result.empty()) cout << -1 << endl;
    else { 
        string mn = s1 + s2;
        for(string &a : result){
            if(a.size() < mn.size()) mn = a;
        }
        cout << mn << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    solve();
}
    