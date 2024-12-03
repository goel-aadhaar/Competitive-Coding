#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define pi pair<int, int>
#define vvi vector<vi>
#define vpi vector<pi>
#define int int64_t
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s.push_back('L');
    s.append(0 , 'L');

    for (int i = 0; i <= s.length();) {
        if (s[i] == 'L') {
            int x = m;
            bool flag = false;
            while (x--) {
                i++;
                if(i == s.length() - 1){
                    cout << "YES" << endl;
                    return;
                }
                if (s[i] == 'L') {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                bool flag2 = false;
                x = m - x;
                while (x--) {
                    if(i == s.length() - 1){
                        cout << "YES" << endl;
                        return;
                    }
                    if (s[i] == 'W') {
                        flag2 = true;
                        break;
                        i--;
                    }
                }
                if (!flag2) {
                    cout << "NO" << endl;
                    return;
                }
            }
        } else {
            bool flag = false;
            while (k-- && i < s.length()) {
                if (s[i] == 'L') {
                    flag = true;
                    break;
                } else i++;
            }
            if (!flag) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}