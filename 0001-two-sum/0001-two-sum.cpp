class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     vector<int>ans;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i]+nums[j]==target){
    //                 ans={i,j};
    //             }
    //         }
    //     }
    // return ans;

    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int left=target-nums[i];
        if(mp.find(left)!=mp.end()){
            return {mp[left],i};
        }
        mp[nums[i]]=i;
    }
    return {};
    }
};