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
set<int> uniquePrimeFactors(int n) {
    set<int> factors;
    while (n % 2 == 0) {
        factors.insert(2);
        n /= 2;
    }
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.insert(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.insert(n);
    }
    return factors;
}
void solve() {
    int n, m; cin >> n >> m;
    vector<string> v(m); 
    vector<pair<char, int>> curr(m);
    for(int i = 0; i < m; i++) {
        cin >> v[i];
        if(v[i][0] == '+') {
            curr[i].first = '+';
            v[i].erase(v[i].begin(), v[i].begin() + 2);
            curr[i].second = static_cast<int>(v[i]);
        }
    }
    set<int>prF;
    int prevSize = 0, element;
    for(int i = 0; i < m; i++){
        if(prF.empty()) {
            prF.insert(uniquePrimeFactors(curr[i].second));
            p("Success");
        }
        else{
            bool flag = true;
            set<int>this = uniquePrimeFactors(curr[i].second);
            for(int &ele : this){
                prevSize = prF.size();
                prF.insert(ele);
                if(prF.size() == prevSize) {
                    element = ele;
                    auto it  = this.begin();
                    while(*it != ele){
                        prF.erase(*it);
                    }
                    flag = false; 
                    break;
                }
            }
            flag == true ? p(Success) : p(Conflict);
        }

    }


}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}