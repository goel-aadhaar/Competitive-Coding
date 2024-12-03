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
void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    stack<char>st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '[' || s[i] == '<' || s[i] == '(' || s[i] == '{'){
            st.push(s[i]);
        } else {
            if(st.empty()){
                p("Impossible");
                return;
            }
            if(s[i] == '}'){
                if(st.top() != '{'){
                    cnt++;
                }
            }
            else if(s[i] == '>'){
                if(st.top() != '<'){
                    cnt++;
                }
            }
            else if(s[i] == ']'){
                if(st.top() != '['){
                    cnt++;
                }
            }
            else if(s[i] == ')'){
                if(st.top() != '('){
                    cnt++;
                }
            }
            st.pop();
        }
    }
    if(st.empty()) cout << (cnt) << endl;
    else cout << ("Impossible") << endl;
}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}