#include <bits/stdc++.h>
using namespace std;

#define ll(i, s, n)        for(int i = s; i < n; i++)
#define rl(i, s, n)        for(int i = s; i < n; i++)
#define all(arr)           arr.begin(), arr.end()
#define vi                 vector<int>
#define pi                 pair<int, int>
#define vvi                vector<vi>
#define vpi                vector<pi>
#define int64_t            int64_t
#define f                  first
#define s                  second
#define pb(x)              push_back(x)
#define ppb(x)             pop_back()
#define YES                cout << "YES" << endl;
#define NO                 cout << "NO" << endl;
#define p(x)               cout << (x) << endl;
#define sp(x)              cout << (x) << " ";
#define endl               '\n'
#define lb(arr, x)         lower_bound(arr.begin(), arr.end(), x)
#define ub(arr, x)         upper_bound(arr.begin(), arr.end(), x)
#define bn(arr, x)         binary_search(arr.begin(), arr.end(), x)
#define mxv(arr)           *max_element(arr.begin(), arr.end())
#define mnv(arr)           *min_element(arr.begin(), arr.end())
#define smv(arr)           accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr)           sort(arr.begin(), arr.end())
#define rsrt(arr)          sort(arr.begin(), arr.end(), greater<int>())
#define rev(arr)           reverse(all(arr))
#define MOD                1000000007
#define lcm(a, b)          ((a) * (b)) / __gcd((a), (b))
#define fastio             ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int partition(vector<int>& P, int s, int e, int& cnt) {
    int pivot = P[floor((s + e) / 2)];
    int lp = s - 1;
    int rp = e + 1;

    while (true) {
        do {
            lp++;
        } while (P[lp] < pivot);

        do {
            rp--;
        } while (P[rp] > pivot);

        if (lp >= rp)
            return rp;

        swap(P[lp], P[rp]);
        cnt++;
    }
}

void quicksort(vector<int>& P, int s, int e, int& cnt) {
    if (s < e) {
        int idx = partition(P, s, e, cnt);
        quicksort(P, s, idx, cnt);
        quicksort(P, idx + 1, e, cnt);
    }
}
void solve(){
    int n; cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;

    quicksort(v, 0, n - 1, cnt);
    p(cnt);
}
signed main() {
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}