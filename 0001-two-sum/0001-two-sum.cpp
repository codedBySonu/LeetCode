class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        int st=0;
        int end=n-1;
        sort(arr.begin(),arr.end());
        while(st<end){
            int sum=arr[st].first+arr[end].first;
            if(sum==target) return {arr[st].second,arr[end].second};
            else if(sum<target) st++;
            else end--;  
        }
        return {};

    }
};