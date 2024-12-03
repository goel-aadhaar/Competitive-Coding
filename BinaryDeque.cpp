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
    int n , k ; cin >> n >> k;
    vi v(n); f(i, 0, n) cin >> v[i];
    int x = count(all(v),1); 
    if(x < k){
        p(-1);
        return;
    }
    else if(x == k) {
        p(0);
        return;
    }
    x-=k;
    vi f,b;
    int count = 0;


    for(int i=0;i<n;i++){
        if(v[i] == 1){
            f.push_back(i);
            count++;
        }
        if(count == x) break;
    }
    count = 0;
    for(int i = n-1;i>=0;i--){
        if(v[i] == 1){
            b.push_back(i);
            count++;
        }
        if(count == x) break;
    }
    int i=0,j=n-1;
    int mn = INT_MAX;
    mn = min (mn,f[x-1] + 1);
    mn = min(mn,n - b[x-1]);
    int counter = 0;
    while(counter < x-1){
        // int p = 
        mn = min(f[counter] + 1 + (n - b[x - counter - 2]),mn);
        counter++;
    }
    p(mn);

}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}