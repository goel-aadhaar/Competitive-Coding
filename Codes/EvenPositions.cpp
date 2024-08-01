#include <bits/stdc++.h>
using namespace std;

#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int long long
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

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;

    int cntO = 0, cntE = 0;
    // Count the parentheses that are out of place
    for(int i = 0; i < n; i++){
        if(i & 1){ // odd index
            if(s[i] == '(') cntO++;
        }
        else { // even index
            if(s[i] == ')') cntE++;
        }
    }
    p(cntO);
    p(cntE);
    stack<char> st1;
    stack<char> st2;
    
    // First pass: try to fix '(' at odd positions and ')' at even positions
    for(int i = 0; i < n; i++){
        if(s[i] == '(') {
            st1.push('(');
        }
        else if(s[i] == '_'){
            if(!st1.empty() && !(i & 1) && cntO > 0){ // Fix ')' at even positions
                s[i] = ')';
                cntO--;
                st1.pop();
            }
        }
    }

    // Second pass: try to fix ')' at even positions and '(' at odd positions
     for(int i = 0; i < n; i++){
        if(s[i] == ')') {
            st2.push(')');
        }
        else if(s[i] == '_'){
            if(!st2.empty() && (i & 1) && cntE > 0){ // Fix '(' at odd positions
                s[i] = '(';
                cntE--;
                st2.pop();
            }
        }
    }

    // Remaining underscores are filled with alternating parentheses
    for(int i = 0; i < n; i++){
        if(s[i] == '_'){
            s[i] = (i & 1) ? '(' : ')';
        }
    }

    // Calculate the positions of '(' and ')'
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') v1.push_back(i + 1);
        else v2.push_back(i + 1);
    }

    int ans = 0;
    // Print positions and calculate the answer
    // for(int i = 0; i < v1.size(); i++){
    //     sp(v1[i]);
    //     sp(v2[i]);
    // }
    // cout << endl;
    for(int i = 0; i < v1.size(); i++){
        ans += v2[i] - v1[i];
    }
    // p(ans);
    p(s);
}

signed main() {
    fastio;
    int t; 
    cin >> t;
    while (t--)
        solve();
    return 0;
}
