#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
void solve() {
    // int n; cin >> n;
    // vi v(n); f(i, 0, n) cin >> v[i];
    // int count =0;
    // int x = n;
    // while(n>1){   
    //     if(n<7){
    //         count += n/2;
    //         p(count);
    //         return;
    //     }
    //     if((__builtin_popcount(n+1) == 1 || __builtin_popcount(n) == 1)){
    //         count++;
    //         p(count);
    //         return;
    //     }
    //     while(__builtin_popcount(n) != 1){
    //         n = n & (n-1);
    //     }
    //     // cout<<n<<endl;

    //         count++;
    //         x = x - n + 1;
    //         n = x;
    // }
    // p(count);
    vi arr(5);
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 6;
    arr[3] = 8;
    arr[4] = 10;
    cout<<upper_bound(arr.begin(),arr.end(),4) - arr.begin();
}
int main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}