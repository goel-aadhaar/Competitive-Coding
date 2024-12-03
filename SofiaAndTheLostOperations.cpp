#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define vvlli vector<vlli>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define pss pair<string, string>
#define ceil(a, b) ((a + b - 1) / b)
#define max_arr(arr) *max_element(arr.begin(), arr.end())
#define min_arr(arr) *min_element(arr.begin(), arr.end())
#define sum_arr(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD1 998244353
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
#define BIT(x,i) ((x & (1LL << i)) > 0LL)
bool binarysearch(vector<int> arr, int target) {
    srt(arr);
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false; 
}

bool binarySearch(vector<int> &b, vector<int>&v, vector<int>arr) {
    srt(arr);
    f(i,0,v.size()){
        int left = 0;
        int right = arr.size() - 1;
        bool flag =false;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == v[i]) {
                flag = true;
                arr.erase(arr.begin()+mid);
                break;
            }
            if (arr[mid] < v[i]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        if(flag==false) return false;
    }

    return true;  
}
void solve() {
    int n; cin >> n; vi a(n),b(n); f(i, 0, n) cin >> a[i];f(i, 0, n) cin >> b[i];
    int m;cin>>m;vi d(m);f(i, 0, m) cin >> d[i];
    vi v;
    f(i,0,n){
        if(a[i]!=b[i]){
            v.push_back(b[i]);
        }
    }
    if(binarySearch(b,v,d) == false){
        NO;
    }
    else{
        if(binarysearch(b,d[d.size()-1]) == true){
            YES;
        }
        else{
            NO;
        }
    }
}
int main() {
    fastio; int t; cin >> t; while (t--) { solve(); } return 0;
}