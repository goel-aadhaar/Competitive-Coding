#include <bits/stdc++.h>
using namespace std;
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
    int n , m , k; cin >> n >> m >> k;
    vi v(n);
    int x = n;
    int i = 0;
    while(x){
        v[i] = x;
        x--;
        i++;
    }
    int j = n - 1;
    int p =m;
    while(m){
        v[j] = m;
        m--;
        j--;
    }
    while(x > p){
        v[i] = x;
        x--;
        i++;
    }
    for(int i = 0; i < n; i++){
        sp(v[i]);
    }
    cout<<endl;
    
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}