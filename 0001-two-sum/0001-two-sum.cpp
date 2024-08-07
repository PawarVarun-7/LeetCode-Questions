class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;

    
        for(int i=0 ; i<nums.size();i++){
            int add= target - nums[i];
            if(mpp.find(add) != mpp.end()){
                return {i,mpp[add]};
            }
             mpp[nums[i]]=i;
        }
        return {};
    }
};