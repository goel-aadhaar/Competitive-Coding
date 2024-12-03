#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    int one = -1;  
    vector<pair<int, int>> v; 
    int cnt = 0;
    if(is_sorted(arr.begin() , arr.end())){
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            one = i;
            break;
        }
    }

    while (mid <= high) {
        if (arr[mid] == 0) {
            if (low == one) one = mid; 
            swap(arr[low], arr[mid]);
            if(abs(arr[low] - arr[mid]) > 1){
                v.push_back({low, one});
                v.push_back({low , mid});
                v.push_back({one , mid});
                cnt += 3;
            } else{
                v.push_back({low , mid});
                cnt++; 
            }
            
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { 
            if (mid == one) one = high; 
            swap(arr[mid], arr[high]);
            if(abs(arr[high] - arr[mid]) > 1){
                v.push_back({mid , one});
                v.push_back({high , mid});
                v.push_back({one , high});
                cnt += 3;
            } else{
                v.push_back({high , mid});
                cnt++;
            }
            high--;
        }
    }


    for (int i = 0; i < v.size(); i++) {
        if(v[i].first == v[i].second) cnt--;
    }
    cout << cnt << endl; 
    for (int i = 0; i < v.size(); i++) {
        if(v[i].first != v[i].second) cout << v[i].first + 1 << " " << v[i].second + 1 << endl; 
    }
}   

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    sortArray(arr);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}