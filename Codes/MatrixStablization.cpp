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
    int n, m; 
    cin >> n >> m;
    vvi v(n, vi(m)); 
    f(i, 0, n){
        f(j, 0, m){
            cin >> v[i][j];
        }
    }
    f(i, 0, m){
        f(j, 0, n){
            bool l = false, r = false , u = false , d = false;
            int mn = INT_MAX;
            char it = 'x';
            if(j > 0){
                if(v[j][i] > v[j-1][i]){
                    // v[j][i] = v[j-1][i];
                    u = true;
                    if(v[j][i] - v[j-1][i] < mn) {
                        mn = v[j][i] - v[j-1][i];
                        it = 'u';
                    }
                }
            }
            else u = true;
            if(j < n-1){
                if(v[j][i] > v[j+1][i]){
                    // v[j][i] = min(v[j][i], v[j+1][i]);
                    d = true;
                    if(v[j][i] - v[j+1][i] < mn) {
                        mn = v[j][i] - v[j+1][i];
                        it = 'd';
                    }
                }
            }
            else d = true;
            if(i > 0){
                if(v[j][i] > v[j][i-1]){
                    // v[j][i] = min(v[j][i], v[j][i-1]);
                    l = true;
                    if(v[j][i] - v[j][i-1] < mn) {
                        mn = v[j][i] - v[j][i-1];
                        it = 'l';
                    }
                }
            }
            else l = true;
            if(i < m-1){
                if(v[j][i] > v[j][i+1]){
                    // v[j][i] = min(v[j][i], v[j][i+1]);
                    r = true;
                    if(v[j][i] - v[j][i+1] < mn) {
                        mn = v[j][i] - v[j][i+1];
                        it = 'r';
                    }
                }
            }
            else r = true;
            if(l && r && u && d){
                v[j][i] -= mn;
            }
        }
    }
    f(i, 0, n){
        f(j, 0, m){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fastio;
    int t; 
    cin >> t;
    while (t--)
        solve();
}