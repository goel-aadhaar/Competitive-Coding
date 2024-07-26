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
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    if(n & 1){
        int idx = -1 , itr = 0;
        while(itr < n && (itr % 2 != 0 || v[itr] != 0)) itr++;
        if(itr != n){
            // p("x");
            idx = itr;
            if(idx == 0){
                cout << 2 << endl;
                cout << 2 << " " << n <<endl;
                cout << 2 << " " << n <<endl;
            }
            else if(idx == n - 1){
                cout << 2 << endl;
                cout << 1 << " " << n - 1<<endl;
                cout << 1 << " " << n - 1<<endl;
            }
            else{
                cout << 4 << endl;
                cout << 1 << " " << idx <<endl;
                cout << 1 << " " << idx <<endl;
                cout << idx + 2 << " " << n <<endl;
                cout << idx + 2 << " " << n <<endl;
            }
        }
        else{
            int a = 0 , b = 1 , c = 2;
            while(c < n){
                if(v[a] ^ v[b] ^ v[c] == 0 && a % 2 == 0){
                    // p("u");
                    if(n == 3) {
                        cout << 1 << endl;
                        cout << 1 << " " << 3 <<endl;
                        return;
                    }
                    else if(a != 0 && a != n - 3) cout << 5 << endl;
                    else cout << 3 << endl;
                    cout << 1 << " " << 3 <<endl;
                    if(a != 0) cout << 1 << " " << a <<endl;
                    if(a != 0) cout << 1 << " " << a <<endl;
                    if(a != n - 3) cout << a + 3 << " " << n <<endl;
                    if(a != n - 3) cout << a + 3 << " " << n <<endl;
                    return;
                }
                a++;b++;c++;
            }
        }
            
    }
    else{
        cout << 2 << endl;
        cout << 1 << " " << n <<endl;
        cout << 1 << " " << n <<endl;
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}