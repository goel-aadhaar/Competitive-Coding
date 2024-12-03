#include <bits/stdc++.h>
using namespace std;

int customStoi(const std::string& str) {
    int num = 0;

    for (char c : str) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
    }

    return num;
}

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;

    if (n == 2) {
        cout << customStoi(s) << endl;
        return;
    } else if (n == 3) {
        if (s[0] == '0' || s[2] == '0') {
            cout << 0 << endl;
            return;
        } else {
            if (s[1] == '0') {
                if (s[0] == '1') cout << s[2] - '0' << endl;
                else if (s[2] == '1') cout << s[0] - '0' << endl;
                else cout << s[0] + s[2] - '0' - '0' << endl;
            } else {
                string a = string(1, s[0]) + string(1, s[1]);
                string b = string(1, s[1]) + string(1, s[2]);
                cout << min(customStoi(a) + customStoi(string(1, s[2])), customStoi(b) + customStoi(string(1, s[0]))) << endl;
            }
        }
    } else {
        bool hasZero = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                hasZero = true;
                break;
            }
        }
        if (hasZero) {
            cout << 0 << endl;
            return;
        }

        string s1 = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '1') s1 += s[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < s1.size() - 1; i++) {
            string str = "";
            str += s1[i];
            str += s1[i + 1];
            int num = customStoi(str);
            mn = min(mn, num);
        }

        cout << mn << endl;

        vector<int> v;
        v.push_back(mn);
        for (int i = 0; i < s1.size(); i++) {
            string str = "";
            str += s1[i];
            str += s1[i + 1];
            int num = customStoi(str);
            if (num == mn) {
                i++;
            } else {
                v.push_back(s1[i] - '0');
            }
        }

        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        cout << sum << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}