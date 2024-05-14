class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());  // Sort the array to use sliding window efficiently
        int n = nums.size();
        int maxFreq = 0;
        int start = 0;
        long long currentSum = 0;  // Use long long to handle potential large sums
        
        for (int end = 0; end < n; ++end) {
            currentSum += nums[end];
            
            // While the current window [start:end+1] cannot be adjusted with k operations,
            // Move the start pointer to the right.
            while ((end - start + 1) * static_cast<long long>(nums[end]) - currentSum > k) {
                currentSum -= nums[start];
                start++;
            }
            
            // Calculate the current frequency for nums[end]
            maxFreq = max(maxFreq, end - start + 1);
        }
        
        return maxFreq;
        
    }
};