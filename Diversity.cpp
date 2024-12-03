#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    k = min(n , k);
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    
    priority_queue<pair<int, int>> pq;  
    
    for(auto it = mp.begin(); it != mp.end(); ++it){
        if(it -> second >= 2) pq.push({it -> second , it -> first});
    }

    while(!pq.empty() && k){
        // cout << "x"<< endl;
        if(k <= 0 || pq.top().first == 1) break;
        else {
            int x = pq.top().first;
            int y = pq.top().second;
            x--;  
            pq.pop();
            pq.push({x , y});
            k--;
        }
    }

    long long ans = n * (n - 1) / 2;
    
    // while(!pq.empty()){
    //     ans -= (pq.top().first) * (pq.top().first - 1) / 2;
    //     pq.pop();
    // }


    while(!pq.empty()){
        ans -= (pq.top().first) * (pq.top().first - 1) / 2;
        pq.pop();
    }


    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}