#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int , int> p1 , pair<int , int> p2){
    if(p1.first + p1.second == p2.first + p2.second){
        return abs(p1.first - p1.second) >  abs(p2.first - p2.second);
    }
    else return p1.first + p1.second < p2.first + p2.second;
}
void solve(){
    int n;
    cin >> n;
    vector<pair<int , int>> v(n);
    for(int i = 0; i < n; i ++) cin >> v[i].first >> v[i].second;
    sort(v.begin() , v.end() , cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    