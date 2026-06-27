class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writeIndex = 0;  // Index to place the next non-`val` element
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[writeIndex] = nums[i];  // Place non-`val` at new position and increment index
                writeIndex++;
            }
        }
        return writeIndex;  // The new length of the array without the `val` elements
    }
};