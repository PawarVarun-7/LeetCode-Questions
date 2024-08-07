class Solution {
public:
    void sortColors(vector<int>& nums) {
        //two pointers left and right
        // i pointer  for transversal
        //if element < 1 or > 1 then swap
       int red = 0;
        int white = 0;
        int blue = nums.size() - 1;
        
        while (white <= blue) {
            if (nums[white] == 0) {
                swap(nums[white], nums[red]);
                red++;
                white++;
            } else if (nums[white] == 1) {
                white++;
            } else {
                swap(nums[white], nums[blue]);
                blue--;
            }
        
        }
    }
};