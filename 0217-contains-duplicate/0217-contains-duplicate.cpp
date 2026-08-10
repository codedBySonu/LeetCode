class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int>st(nums.begin(),nums.end());
        // if(st.size()==nums.size()) return false;
        // else return true;

    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i]==nums[j]){
    //                 return true;
    //             }
    //         }
    //     }
    // return false;
    sort(nums.begin(),nums.end());
    int i=0;
    int j=i+1;
    for(int i=0;i<nums.size()-1;i++){
        j=i+1;
        if(nums[i]==nums[j]) return true;
    }
    return false;
    }
};