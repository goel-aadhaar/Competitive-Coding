#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vi v(n, 0);
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(i == (x-1) || i == (y-1)) v[i] = 1;
        else if(i & 1) v[i] = 1;
        else v[i] = -1;
    }
    if(y != n - 1 && v.back() == 1){
        v.back() = -1;
        v[y] = 1; 
    }
    

    // if()
    // for(int i = 0; i < n; i++){
    //     if(i == (x-1) || i == (y-1)) v[i] = 1;
    //     else if(i & 1) v[i] = 1;
    //     else v[i] = -1;
    // }
    // for(int i = n - 1; i >= )
    // int fr1, fr2;
    // if (x & 1) {
    //     fr1 = x / 2 + 1; 
    //     fr2 = fr1 - 1;
    //     cnt++;
    // } else {
    //     fr1 = x / 2 + 1; 
    //     fr2 = fr1;
    //     cnt += 2;
    // }

    // for (int i = 0; i < x; i++) {
    //     if (i < fr2) 
    //         v[i] = -1;
    //     else 
    //         v[i] = 1;
    // }

    // int br1, br2;
    // if (x & 1) {
    //     br1 = x / 2 + 1; 
    //     br2 = br1 - 1;
    //     cnt++;
    // } 
    // else {
    //     br1 = x / 2 + 1; 
    //     br2 = br1;
    //     cnt += 2;
    // }

    // for (int i = 0; i < br1; i++) {
    //     v[n - 1 - i] = -1;
    // }
    // for (int i = 0; i < br2; i++) {
    //     v[n - 1 - br1 - i] = 1;
    // }

    // // int sum = smv(v);

    // if (x < y) {
    //     for (int i = x; i < y; i++) {
    //         if (cnt > 0) {
    //             v[i] = -1;
    //             cnt--;
    //         } else {
    //             v[i] = 1;
    //             cnt++;
    //         }
    //     }
    // }
    for(int i = 0; i < n; i++) sp(v[i]);
    cout<<endl;
    // cout << sum << endl;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
}
