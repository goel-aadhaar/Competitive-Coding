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
    string a, b;
    cin >> a >> b;
    int mn = a.length() + b.length();
    int size = mn;
    for(int i = 0; i < b.length(); i++){
        int j = 0, cnt = 0;
        while(j < a.length()){
            if(b[i] == a[j]){
                cnt ++;
                int idxA = j + 1 , idxB = i + 1;
                while (idxA < a.length() && idxB < b.length()){
                    if(b[idxB] == a[idxA]) {
                        idxA++;
                        idxB++;
                        cnt++;
                    }
                    else idxA++;
                }
                break;
            }
            j++;
        }
        mn = min(mn , size - cnt);
    }
    p(mn);
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}