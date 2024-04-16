class Solution {
public:
    void subset(vector<int>&nums,vector<int>v,vector<vector<int>>&ans,int index){
        if(index==nums.size()){
            ans.push_back(v);
            return;
        }
        subset(nums,v,ans,index+1);
        v.push_back(nums[index]);
        subset(nums,v,ans,index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {   
        vector<vector<int>>ans;
        vector<int>v;
        subset(nums,v,ans,0);
        return ans;
    }
};