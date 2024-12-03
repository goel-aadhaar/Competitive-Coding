#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
    int diff1 = p1.first - p1.second;
    int diff2 = p2.first - p2.second;

    if (diff1 == diff2) {
        return p1.first > p2.first; 
    } else {
        return diff1 > diff2; 
    }
}
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first;
    for (int i = 0; i < n; i++) cin >> v[i].second;

    sort(v.begin(), v.end() , cmp);
    vector<pair<int, int>> ans = v;
    for (int i = n - 2; i >= 0; i--) {
        v[i].second += v[i + 1].second; 
        v[i].first += v[i + 1].first;   
    }
    for(int i = 0; i < n ; i ++){
        cout << v[i].first << " ";
    }
    cout << endl;
    for(int i = 0; i < n ; i ++){
        cout << v[i].second << " ";
    }
    cout << endl;
    int mx = 0, i = 0;

    while (i < n && v[i].first > v[i].second) i++;
    int p = i - 1 , q = n - 1;
    while(i - 1 >= 0){
        if(ans[i].first)
    }
    if (i == 0) {
        if (n == 1) {
            cout << v[0].first + v[0].second << "\n";
            return;
        }
        cout << v[0].first - v[1].second + v[0].second << "\n";
        return;
    } else {
        cout << v[0].first - v[i].first + v[i - 1].second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
