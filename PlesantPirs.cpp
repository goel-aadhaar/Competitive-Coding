#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n); for(int i = 0; i < n; i++) cin >> v[i];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + (i - (i + 1) % v[i]) - 1; j < n; j += v[i]){
                if(i + j + 2 == v[i] * v[j]) cnt++;
            }
        }
        cout << (cnt) << endl;
    }
}