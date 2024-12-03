#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a , b;
    cin >> a >> b;
    long long sum = -1 + sqrt(1 + 8 * (a + b)) / 2 + 2;
    
    long long x = a , y = b;
    while(sum){
        long long c = sum;
        x = a , y = b;
        while(c){
            if(x <= 0 && y <= 0) break;
            if(x > y){
                if(x >= c) x -= c;
                else break;
            } 

            else {
                if(y >= c) y -= c;
                else break;
            } 
            if(c == 1){
                cout << sum << endl;
                return;
            }
            c--;
        }
        sum += llabs
        sum --;
    }
    cout << 0 << endl;
        
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
}
    