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
    vector<string> s1(n), s2(n);

    f(i, 0, n) {
        cin >> s1[i];
    }

    f(i, 0, n) {
        cin >> s2[i];
    }

    vvi v1(n, vi(m));
    vvi v2(n, vi(m));

    f(i, 0, n) {
        f(j, 0, m) {
            v1[i][j] = s1[i][j] - '0';
        }
    }
    f(i, 0, n) {
        f(j, 0, m) {
            v2[i][j] = s2[i][j] - '0';
        }
    }

    f(i, 0, n-1) {
        f(j, 0, m-1) {
            if (abs(v1[i][j] - v2[i][j]) == 2) {
                if (v1[i][j] > v2[i][j]) {
                    v1[i][j] += 1;
                    v1[i][m - 1] += 2;
                    v1[n - 1][j] += 2;
                    v1[n - 1][m - 1] += 1;
                }
                else {
                    v1[i][j] += 2;
                    v1[i][m - 1] += 1;
                    v1[n - 1][j] += 1;
                    v1[n - 1][m - 1] += 2;
                }
            }
            if (abs(v1[i][j] - v2[i][j]) == 1) {
                if (v1[i][j] > v2[i][j]) {
                    v1[i][j] += 2;
                    v1[i][m - 1] += 1;
                    v1[n - 1][j] += 1;
                    v1[n - 1][m - 1] += 2;
                }
                else {
                    v1[i][j] += 1;
                    v1[i][m - 1] += 2;
                    v1[n - 1][j] += 2;
                    v1[n - 1][m - 1] += 1;
                }
            }
        }
    }

    // f(i, 0, n) {
    //     f(j, 0, m) {
    //         cout << v1[i][j] <<" ";
    //     }
    //     cout<< endl;
    // }

    f(i, 0, n) {
        f(j, 0, m) {
            
            v1[i][j] %= 3;
            if (v1[i][j]!= v2[i][j]) {
                NO
                return;
            }
        }
    }
    YES
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}