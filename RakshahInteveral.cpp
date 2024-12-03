#include<bits/stdc++.h>

using namespace std;

void zeroToOne(vector<int>& arr, vector<pair<int, int>>& tt) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        if (arr[low] == 0) {
            low++;
        } else {
            if (low < high) {  
                tt.push_back({low, high}); 
                swap(arr[low], arr[high]);
                // cout << low << " " << high << endl;
            }
            high--;
        }
    }
}

void oneToTwo(vector<int>& arr, vector<pair<int, int>>& tt , int & it) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 0) {
            if (low < mid) {
                tt.push_back({low + it, mid + it}); 
                swap(arr[low], arr[mid]);
                // cout << low << " " << mid << endl;
            }
            low++;
            mid++;
        } else {
            if (mid < high) {  
                tt.push_back({mid + it, high + it}); 
                swap(arr[mid], arr[high]);
                // cout << mid << " " << high << endl;
            }
            high--;
        }
    }
}

void sortArray(vector<int>& arr) {
    if(is_sorted(arr.begin() , arr.end())){
        cout << 0 << endl;
        return;
    }
    vector<pair<int, int>> tt; 

    zeroToOne(arr, tt);

    int it = 0;
    while (it < arr.size() && arr[it] == 0) {
        it++;
    }

    vector<int> sec(arr.begin() + it, arr.end());
    vector<pair<int, int>> sst;
    oneToTwo(sec, sst , it);
    
    for (int i = 0; i < sec.size(); i++) {
        arr[it + i] = sec[i];
    }

    tt.insert(tt.end(), sst.begin(), sst.end());

    cout << tt.size() << endl;
    for (const auto& o : tt) {
        cout << o.first + 1 << " " << o.second + 1 << endl;
    }
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    // cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sortArray(arr);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    int t; 
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    
    return 0;
}