#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> v1 = v;
        int initialSum = 0;
        for (int i = 0; i < n - 1; i++) initialSum += abs(v[i] - v[i + 1]);
        int mx = 0;
        int index = -1;
        string source = "";
        for (int i = 1; i < n-1; i++) {
            int temp_max1 = abs(v[i - 1] + v[i + 1] - 2 * k);
            int temp_max2 = abs(v[i - 1] + v[i + 1] - 2);
            if (temp_max1 > mx) { mx = temp_max1; index = i; source = "temp_max1"; }
            if (temp_max2 > mx) { mx = temp_max2; index = i; source = "temp_max2"; }
        }
        if(index>=0){
            if (source == "temp_max2") v1[index] = 1;
            else v1[index] = k;
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" "; 
        }
        cout<<endl;
        int adjustedSum = 0;
        for (int i = 0; i < n - 1; i++) adjustedSum += abs(v1[i] - v1[i + 1]);
        int mx2 = 0;
        int mxSum = 0;
        vector<int> v2 = v;
        v2[0] = 1;
        for (int i = 0; i < n-1; i++) mxSum += abs(v2[i] - v2[i + 1]);
        mx2 = max(mx2, mxSum);
        mxSum = 0;
        v2[0] = k;
        for (int i = 0; i < n-1; i++) mxSum += abs(v2[i] - v2[i + 1]);
        mx2 = max(mx2, mxSum);   
        mxSum = 0;
        v2[0]=v[0];
        v2[n - 1] = 1;
        for (int i = 0; i < n-1; i++) mxSum += abs(v2[i] - v2[i + 1]);
        mx2 = max(mx2, mxSum);
        mxSum = 0;
        v2[n - 1] = k;
        for (int i = 0; i < n-1; i++) mxSum += abs(v2[i] - v2[i + 1]);
        mx2 = max(mx2, mxSum);
        v2[n-1]=v[n-1];
        for(int i=0;i<n;i++){
            cout<<v2[i]<<" "; 
        }
        cout<<mx2<<initialSum<<adjustedSum<<endl;
        cout <<max(mx2, max(initialSum, adjustedSum)) << endl;
    }
    return 0;
}
