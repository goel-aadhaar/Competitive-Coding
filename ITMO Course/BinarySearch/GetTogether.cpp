#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
bool check(double mid , vector<double> &x, vector<double> &v, int n){
    vector<double> ansL(n);
    vector<double> ansR(n);
    
    double lp = -1e18, up = 1e18;
    for(int i=0;i<n;i++){
        ansL[i]= -(v[i] * mid) +x[i];
        ansR[i]= v[i] * mid +x[i];
        lp = max(ansL[i],lp);
        up = min(ansR[i],up);
    }
    return lp <= up;

}
int main(){
    fast_io;
    int n;
    cin >> n;
    vector<double> x(n),v(n);
    for(int i = 0; i < n; i++){
        cin>>x[i]>>v[i];
    }
    double lo = 1, hi =1e10, ans = 0;int iter  = 100;
    while(iter --){
        double mid = lo+(hi-lo)/2;
        if(check(mid, x, v, n)){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
        if (abs(lo-hi) < 1e-7) break;
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;

}