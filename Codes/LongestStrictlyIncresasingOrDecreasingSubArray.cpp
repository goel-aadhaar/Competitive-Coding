#include<iostream>
#include<vector>
using namespace std;
int longestMonotonicSubarray(vector<int>nums) {
        int countI=1;
        int countD=1;
        int max_I=1;
        int max_D=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                countI++;//countI 2 0
                max_D=(max(countD,max_D));//maxD 1
                countD=1;//countD 1
            }
            else if(nums[i]>nums[i+1]){
                countD++;//countD 2 3
                max_I=max(countI,max_I);//maxI 2
                countI=1;
            }
        }
        max_I=max(countI,max_I);
        max_D=max(countD,max_D);
        return max(max_I,max_D);
    }
int main()
{
    vector<int>v(4);
    v[0]=1;
    v[1]=4;
    v[2]=3;
    v[3]=3;
    v[4]=2;
    cout<<longestMonotonicSubarray(v);
    return 0;
}