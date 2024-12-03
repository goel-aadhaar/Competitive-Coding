#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
void solve() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int i = a, j = b;
    int count = 0;
    vector< pair<int,int> >v;
    while(j<=y){
        i = a;
        while(i<=x){
            if(i>j){
                count++;
                v.push_back({i,j});
            }
            i++;
        }
        j++;
    }
    cout<<count<<endl;
    stable_sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}