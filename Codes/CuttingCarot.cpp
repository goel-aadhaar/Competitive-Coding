#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long double n, k;
    cin >> n >> k;
    vector<long double> v;
    long double h;
    for(int i = n; i > 1; i--){
        h = ((k * sqrt(n - i + 1)) / (long double)sqrt(n));
        v.push_back(h);
    }
    cout << fixed << setprecision(12);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0; 
}