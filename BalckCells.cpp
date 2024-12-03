#include <bits/stdc++.h>
using namespace std;
#define ll(i , s , n)        for(int i = s; i < n; i++)
#define rl(i , s , n)        for(int i = s; i < n; i++)
#define all(arr)             arr.begin(), arr.end()
#define vi                   vector<int>
#define pi                   pair<int , int>
#define vvi                  vector<vi>
#define vpi                  vector<pi>
#define int                  int64_t
#define f                    first
#define s                    second
#define pb(x)                push_back(x)
#define ppb()               pop_back()
#define YES                  cout << "YES" << endl;
#define NO                   cout << "NO" << endl;
#define p(x)                 cout << (x) << endl;
#define sp(x)                cout << (x) << " ";
#define endl                 '\n'
#define lb(arr , x)          lower_bound(arr.begin() , arr.end() , x)
#define ub(arr , x)          upper_bound(arr.begin() , arr.end() , x)
#define bn(arr , x)          binary_search(arr.begin() , arr.end() , x)
#define mxv(arr)             *max_element(arr.begin(), arr.end())
#define mnv(arr)             *min_element(arr.begin(), arr.end())
#define smv(arr)             accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr)             sort(arr.begin(), arr.end())
#define rsrt(arr)            sort(arr.begin(), arr.end() , greater<int>())
#define rev(arr)             reverse(all(arr))
#define MOD                  1000000007
#define lcm(a , b)           ((a) * (b)) / __gcd((a) , (b))
#define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    vi diff1(n);
    int diff2 = 1;
    srt(v);
    if(n & 1){
        diff1[0] = 1;
        for(int i = 0; i < n - 1; i += 2){
            diff1.push_back(max(diff1[i - 1] , v[i + 1] - v[i]));
        }
        for(int i = 0; i < n - 1; i += 2){
            if(v[i + 1] - v[i] == diff1.back()){
                if(i == n - 2){
                    p((v[i + 1] - v[i] + 1) / 2);
                    return;
                } else {
                    int x = 1;
                    for(int j = i + 1; j < n - 1; j++){
                        x = max(v[j + 1] - v[j] , x);
                    }
                    p(max(x , v[i + 1] - v[i]));
                    return;
                }
            }
        }
    } else {
        for(int i = 0; i < n - 1; i += 2){
            diff2 = max(diff2 , v[i + 1] - v[i]);
        }
        p(diff2);
    }
    

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}
// #include<bits/stdc++.h>
// //vivaanpc
// using namespace std;
// //vivaanpc
// void solve() {
// 	long long n;
// 	cin >> n;
// 	vector<long long> v(n);
// 	set<long long> v2;
// 	for (long long i = 0; i < n; ++i) {
// 		cin >> v[i];
// 	}
// 	if (n == 1 || n == 2) {
// 		cout << 1 << "\n";
// 		return;
// 	}
// 	sort (v.begin(), v.end());
// 	for (long long i = 1; i < n; i++) {
// 		v2.insert(v[i] - v[i - 1]);
// 	}
// 	// for (auto me = v2.begin(); me != v2.end(); me++) {
// 	// 	cout << *me << endl;
// 	// }
// 	auto it = v2.rbegin();
// 	--it;
// 	--it;
// 	cout << *it << "\n";
// }
// int main() {
// 	// ios::sync_with_stdio(false);
// 	// cin.tie(nullptr);
// 	// freopen("D:\\Temp\\input.txt", "r", stdin);
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		solve();
// 	}
// }