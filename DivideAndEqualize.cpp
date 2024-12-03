#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
vector<bool> is_prime(1e6 + 1, true);

vector<int> sieve(int n) {
      
    vector<int> primes;  

    is_prime[0] = is_prime[1] = false; 

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);  
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; 
            }
        }
    }

    return primes;
}

void solve(vector<int> primes) {
    int n; 
    cin >> n;
    vi v(n); 
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int itr = 0;
        if(is_prime[v[i]-1]) {
            mp[v[i]]++;
            continue;
        }
        while (v[i] != 1) {
            while (v[i] % primes[itr] == 0) {
                mp[primes[itr]]++;
                v[i] /= primes[itr];
            }
            itr++;
        }
    }
    
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second % n != 0) {
            NO
            return;
        }
    }
    
    YES
}

signed main() {
    fastio;
    int t; 
    cin >> t;
    vector<int> primes = sieve(1e6);
    

    while (t--)
        solve(primes);
}
