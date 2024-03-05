class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());

    // Copy elements to temp array with new positions
    for (int i = 0; i < nums.size(); ++i) {
        temp[(i + k) %nums.size()] = nums[i];
    }
        
        nums =temp;
    }
};