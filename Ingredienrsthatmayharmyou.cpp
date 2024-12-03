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
#define ppb(x)               pop_back()
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

int mod_pow(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n; 
    cin >> n;
    vi v(n);
    
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    
    vvi fr(n);
    
    for(int i = 0; i < n; i++) {
        set<int> primes;
        int val = v[i];
        int sq = sqrt(val);
        for(int j = 2; j <= sq; j++) {
            if(val % j == 0) primes.insert(j);
            while(val % j == 0) val /= j;
        }
        if(val > 1) primes.insert(val); 
        
        for (auto prime : primes) {
            fr[i].push_back(prime);
        }
        sort(fr[i].begin(), fr[i].end()); 
    }
    
    int m; 
    cin >> m;
    
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        set<int> primes;
        int val = x;
        int sq = sqrt(val);
        for(int j = 2; j <= sq; j++) {
            if(val % j == 0) primes.insert(j);
            while(val % j == 0) val /= j;
        }
        if(val > 1) primes.insert(val); 
        
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            bool flag = true;
            for(auto it : primes){
                if(binary_search(fr[j].begin(), fr[j].end(), it)) {
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        
        p(mod_pow(2, cnt, MOD));  
    }
}

signed main() {
    fastio;
    solve();
}
