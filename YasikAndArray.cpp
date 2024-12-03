#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        int sum =0;
        int ansMax=INT_MIN;
        int maxi =INT_MIN;
        int ans = *max_element(nums.begin(),nums.end());
        if(ans<=0){
            cout<<ans<<endl;
            continue;
        }
        int a=0,b=0;
        for(int j=0;j<n-1;j++){
            if((nums[j]+nums[j+1])&1){
                b++;
            }
            else{
                for(int i=a;i<=b;i++){
                    sum = max(0,sum+nums[i]);
                    maxi = max(maxi,sum);
                }
                ansMax=max(maxi,ansMax);
                sum=0;maxi=0;
                a = b+1;
                b++;
            }
        }
        for(int i=a;i<=b;i++){
            sum = max(0,sum+nums[i]);
            maxi = max(maxi,sum);
        }
        ansMax=max(maxi,ansMax);
        cout<<ansMax<<endl;
    }
    return 0;
}