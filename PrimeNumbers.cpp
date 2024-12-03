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
int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}

vi pr;
int sq = sqrt(1e12);


void solve() {
    int n; cin >> n;
    if(n < 38){
        cout<<"No";
        return;
    }
    n -= 4;
    for(int i = 0; i < pr.size();i++){
        if(pr[i] > sqrt(n)) break;
        int x = sqrt(n - pow(pr[i] , 2));
        if(x == pr[i] || (pow(x , 2) + pow(pr[i] , 2) != n) ) continue;
        if(binary_search(pr.begin() , pr.end() , x)){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";


}
signed main() {
    fastio;
    for(int i = 3; i <= sq; i+=2){
        if(isprime(i)) pr.push_back(i);
    }
        solve();
}