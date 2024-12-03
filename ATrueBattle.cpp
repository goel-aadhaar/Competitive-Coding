#include<bits/stdc++.h>
using namespace std;
void solve(){
    stack<char> st;
    int ch = 1 , n;
    cin >> n;
    string s;cin >> s;
    for(int i = 0; i < n ; i ++){
        if(st.empty() || st.top() == s[i]) st.push(s[i]);
        else {
            st.pop();
            if(ch == 1) { 
                st.push('1');
                ch = 0;
                while(st.size() > 1){
                    char a = st.top();
                    st.pop();
                    char b = st.top();
                    st.pop();
                    if(a != b){
                        if(ch == 1){
                            ch = 0;
                            st.push('1');
                        } else{
                            ch = 1;
                            st.push('0');
                        }
                    } else {
                        st.push(a);
                        // st.push(a);
                    }
                }
            } else {
                if(!st.empty() && st.top() == '1') continue;
                st.push('0');
                ch = 1;
                while(st.size() > 1){
                    char a = st.top();
                    st.pop();
                    char b = st.top();
                    st.pop();
                    if(a != b){
                        if(ch == 1){
                            ch = 0;
                            st.push('1');
                        } else{
                            ch = 1;
                            st.push('0');
                        }
                    } else {
                        st.push(a);
                        // st.push(a);
                    }
                }
            }
        }
    }
    if(st.top() == '1') cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    