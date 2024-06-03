#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define vvlli vector<vlli>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define pss pair<string, string>
#define ceil(a, b) ((a + b - 1) / b)
#define max_arr(arr) *max_element(arr.begin(), arr.end())
#define min_arr(arr) *min_element(arr.begin(), arr.end())
#define sum_arr(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD1 998244353
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
#define BIT(x,i) ((x & (1LL << i)) > 0LL)
void solve() {
    int n,f,k; cin >> n>>f>>k; vi v(n); f(i, 0, n) cin >> v[i];
    int fav  = v[f-1];
    // cout<<fav<<endl;
    int count=0;
    int counta=0;
    f(i,0,n){
        if(v[i]==fav)count++;
    }
    
    srt(v);
    // f(i,0,n)sp(v[i]);
    // if(v[n-k-1] == fav){
    //     cout<<"MAYBE"<<endl;
    //     return;
    // }
    while(k--){
        // cout<<v.back()<<endl;
        if(v.back() == fav){
            counta++;
        }
        
        v.pop_back();

    }
    if(counta ==0){
        NO
    }
    else if(counta<count){
        cout<<"MAYBE"<<endl;
    }
    else YES
    // rev(v);

    
    // if(v[0]<fav){
    //     YES
    //     return;
    // }
    // else{
    //     NO
    // }
    

}
int main() {
    fastio; int t; cin >> t; while (t--) { solve(); } return 0;
}