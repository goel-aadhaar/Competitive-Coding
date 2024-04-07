// #include<iostream>
// #include<climits>
// using namespace std;

// int main()
// {
//     int n;cin>>n;int ans[n];
//     for(int i=0;i<n;i++){
//         int x;cin>>x;
//         int arr[x];
//         for(int j=0;j<x;j++){
//             cin>>arr[j];
//         }
//         int j=0;int p=0,q=0;int max=INT_MIN;
//         while(j<x-1){
//             if(arr[j]<arr[j+1])q=(j+1);   
//             else {
//                 if((arr[q]-arr[p])>max)max=(arr[q]-arr[p]);
//                 p=j+1;
//                 q=j+1;
//             }
//             if(q==(x-1)){
//                 if((arr[q]-arr[p])>max)max=(arr[q]-arr[p]);
//             }
//             j++;
//         }
//         ans[i]=max;
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> arr(x);
        for (int j = 0; j < x; j++) {
            cin >> arr[j];
        }
        int max_diff = INT_MIN;
        int p = 0;
        int x_minus_1 = x - 1;
        for (int j = 0; j < x_minus_1; j++) {
            if (arr[j] < arr[j + 1]) {
                max_diff = max(max_diff, arr[j + 1] - arr[p]);
            } else {
                p = j + 1;
            }
        }
        max_diff = max(max_diff, arr[x_minus_1] - arr[p]);
        ans[i] = max_diff;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
