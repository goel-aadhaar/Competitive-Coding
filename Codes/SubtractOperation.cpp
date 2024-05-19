#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
#define Mod 1000000007
#define endl "\n"
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
#define SORT(x) sort(x.begin(),x.end());
#define For(i,n) for(int i=0;i<n;i++) 
#define Forl(i,a,n) for(int i=a;i<n;i++) 
#define Forr(i,n,a) for(int i=n;i>=a;i--) 

void solve() {
    int n, k;
    cin >> n >> k;
    vi v;
    set<int> s;

    For(i, n) {
        int a;
        cin >> a;
        s.insert(a);
    }

    for (auto i : s) {
        v.push_back(i);
    }

    for (int i = 0; i < v.size(); i++) {
        int lo=i,hi=v.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(abs(v[i]-v[mid])==k){
                YES
                return;
            }
            else if(abs(v[i]-v[mid])<k){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
    }
    NO
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
