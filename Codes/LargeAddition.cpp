#include <bits/stdc++.h>
using namespace std;
#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
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
void solve() {
    lli n; cin >> n;
    // vi v(n); f(i, 0, n) cin >> v[i];
    string a,b;

    if(n&1){
        a = to_string(n/2);
        b = to_string((n+1)/2);
    }

    else{
        a = to_string(n/2);
        b = to_string(n/2);
    }
    bool flag = true;
    if(a.size() == b.size()){
        for(int i=0;i<a.size();i++){
            int x = a[i] -'0';
            int y = b[i] -'0';
            if(x+y<10){
                if(i!=0 && (((x+y) != 9) || i!=a.size()-1) && ((a[i-1] -'0') > 5 || (b[i-1] -'0') > 5)){
                    a[i] = '9';
                    b[i]= '9';
                    
                    continue;

                }
                flag  = false;
                break;
            }
        }
        if(flag == true){
            YES
            return;
        }
        else {
            NO
            return;
        }
    } 
    else{
        rev(a);rev(b);
        int mn = min(a.size() , b.size());
        for(int i=0;i<mn;i++){
            int x = a[i] -'0';
            int y = b[i] -'0';
            if(x+y<10){
                if(i!=0 && (((x+y) != 9) || i!=mn-1) && ((a[i-1] -'0') > 5 || (b[i-1] -'0') > 5)){
                    
                    a[i] = '9';
                    b[i]= '9';
                    continue;
                }
                flag  = false;
                break;
            }
        }
        if(flag == true){
            if(a.size()<b.size()){
                int last = b.back() - '0';
                if(last>=5) YES
                else NO
            }
            else{
                int last = a.back() - '0';
                if(last>=5) YES
                else NO
            }
            return;
        }
        else {
            NO
            return;
        }
    }
}
int main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}