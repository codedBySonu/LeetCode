class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()>=3){
            return *next(s.rbegin(),2);
        }else{
            return *s.rbegin();
        }  
    }
};