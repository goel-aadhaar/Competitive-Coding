#include <bits/stdc++.h>
using namespace std;
#define int                  int64_t
#define MOD                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define all(arr)             arr.begin(), arr.end()
#define rall(arr)            arr.rbegin(), arr.rend()

void solve() {
    int n , k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &it : arr) cin >> it;
    sort(all(arr));
    int ans = 0;
    int x = 0, y = 1;
    while(y < n) {
        while(x < n && arr[x] <= k) ans += arr[x] , x++ , y++;
        while(x < n && y < n && arr[x] == arr[y]) y++;
        if(x >= n) {
            cout << ans << endl;
            return;
        }
        if(y >= n){
            if(y - x == 1){
                cout << ans + arr.back() <<endl;
                // cout << "b";
                return;
            } else {
                y = x + 1;
                arr[x]--;
                arr[y]--;
                // cout << "n"<< x << " " << y << endl;
                continue;
            }
        }
        ans += k;
        // cout <<" v";
        // cout << arr[x] << " " << x << endl; 
        arr[y] -= (arr[x] - k);
        arr[x] = k;
        x++;
        if(arr[x] > arr[y]) swap(arr[x] , arr[y]);
        y = x + 1;
    }
    cout << ans + arr.back() <<endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
}
