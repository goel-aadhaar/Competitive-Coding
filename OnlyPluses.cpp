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
void updateValueInMultiset(multiset<int>& s, int oldValue, int newValue) {
    auto it = s.find(oldValue);
    if (it != s.end()) {
        s.erase(it);
        s.insert(newValue);
    }
}
void solve() {
    int a, b, c; cin >> a >> b >> c;
    multiset<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    // for(int ele : s){
    //     sp(ele);
    // }
    for(int i = 0; i < 5; i++){
        int x = *s.begin();
        updateValueInMultiset(s , x , x + 1);
    }
    int mul = 1;
    for(int ele : s){
        // sp(ele);
        mul *= ele;
    }
    p(mul);
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}