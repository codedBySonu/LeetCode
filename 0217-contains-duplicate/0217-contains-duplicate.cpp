class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set <int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(n==s.size()){
            return false;
        }
    return true;
    }
};