#include<bits/stdc++.h>
using namespace std;

bool check (long long mid, vector<long long> &prefixSum, int n, int k){
    int count = 0;
    long long previousSum = 0;
    int i = 0;
    int index = 0;
    while(i < n){
        if((prefixSum[i] - previousSum) == mid){
            count++;
            previousSum = prefixSum[i];
            index = i;
        }
        else if((prefixSum[i] - previousSum) > mid){
            count++;
            previousSum = prefixSum[i - 1];
            i--;
            index = i;
        }
        i++;
    }
    if (index < n-1) {
        count++;
    }
    return count <= k;
}

int main(){
    int n, k;
    cin >> n >> k;
    long long ans = 0;
    vector<long long> integers(n);
    vector<long long> prefixSum(n);
    for(int i = 0; i < n; i++){
        cin >> integers[i];
    }
    prefixSum[0] = integers[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + integers[i];
    }
    // for(int i = 0; i < n; i++){
    //     cout << prefixSum[i] << " "; 
    // }
    long long lo = *max_element(integers.begin(), integers.end()), hi = 1e18;
    while(lo <= hi){
        long long mid = lo + (hi - lo)/2;
        if(check(mid, prefixSum, n, k)){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;


}