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
void solve() {
    int n,m; cin >> n>>m;
    string str;cin>>str;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countE = 0;
    int countF = 0;
    int countG = 0;
    f(i,0,n){
        if(str[i]=='A'){
            countA++;
        }
        if(str[i]=='B'){
            countB++;
        }
        if(str[i]=='C'){
            countC++;
        }
        if(str[i]=='D'){
            countD++;
        }
        if(str[i]=='E'){
            countE++;
        }
        if(str[i]=='F'){
            countF++;
        }
        if(str[i]=='G'){
            countG++;
        }
    }
    int count =0;
    if(countA<m)count+=(m-countA);
    if(countB<m)count+=(m-countB);
    if(countC<m)count+=(m-countC);
    if(countD<m)count+=(m-countD);
    if(countE<m)count+=(m-countE);
    if(countF<m)count+=(m-countF);
    if(countG<m)count+=(m-countG);
    p(count);
}
int main() {
    fastio; int t; cin >> t; while (t--) { solve(); } return 0;
}