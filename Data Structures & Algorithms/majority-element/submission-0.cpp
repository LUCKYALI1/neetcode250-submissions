class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> freq ;
        for(int num : nums){
            freq[num]++;
        }
        int n = nums.size() / 2;
        for(auto it : freq){
            if(it.second > n){
                return it.first;
            }
        }
        return 0;
    }
};