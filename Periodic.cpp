#include<bits/stdc++.h>
using namespace std;

int btoi(const string& binary) {
    int result = 0;
    for (char c : binary) {
        result = result * 2 + (c - '0');
    }
    return result;
}

unordered_set<int> ppn() {
    unordered_set<int> pn;

    for (int n1 = 1; n1 <= 30; ++n1) {
        for (int j = 1; j <= n1; ++j) {
            if (n1 % j == 0) { 
                string s = "";
                int num = n1;

                while (num > 0) {
                    for (int k = 0; k < j; k++) {
                        s += '1';
                    }
                    num -= j;
                    if (num == 0) break;
                    for (int k = 0; k < j; k++) {
                        s += '0';
                    }
                    num -= j;
                }

                pn.insert(btoi(s));
            }
        }
    }

    return pn;
}

void solve(const unordered_set<int>& pn) {
    int l , r;
    cin >> l >> r;
    int mid = 0;

    for (int num : pn) {
        if (num >= l && num <= r) {
            mid++;
        }
    }

    cout << mid << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    unordered_set<int> pn = ppn();

    int t; 
    cin >> t;
    while (t--) {
        solve(pn);
    }

    return 0;
}
