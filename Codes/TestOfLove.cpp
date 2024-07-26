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
    int n, m, k;
    cin >> n >> m >> k;
    m--;
    string str;
    cin >> str;
    n+=2;
    str.insert(str.begin(), 'L');
    str.push_back('L');

    for (int i = 0; i < n; i++) {
        if (str[i] == 'L') continue;
        else {
            if (i + m >= n) {
                YES
                return;
            }
            bool found = false;

            for (int j = i; j <= i + m; j++) {
                if (str[j] == 'L') {
                    found = true;
                    i = j + 1;
                    break;
                }
            }
            // p(found);
            if (!found) {
                int idx = -1;
                bool winnable = false;
                for (int j = i + m; j >= i; j--) {
                    if (str[j] == 'W') {
                        idx = j;
                        winnable = true;
                        k--;
                        if(k < 0) {
                            NO
                            return;
                        }
                        i = j + 1; 
                        break;
                    }
                }
                if (!winnable) {
                    NO
                    return;
                }
                else {
                    if( str[idx + 1] == 'C'){
                        NO
                        return;
                    }
                }
            }
        }
    }
    YES
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
