#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n , a , b; cin >> n >> a >> b;
        if(a == 0){
            if(b < n - 2){
                cout << (-1) << endl;
            } else {
                if(b < n) {
                    cout << n - 1 << endl; 
                } else{
                    cout << n << endl;
                }
            }
        }
        else if(b >= n) {
            cout << n << endl;
        }
        else {
            long long num = (n - b) / a;
            if(num * a == n - b) num--;
            cout << (n - num - 1) << endl;
        }
        
    }
}