class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Store {element, frequency} pairs
        vector<pair<int, int>> arr;
        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Sort based on frequency (descending)
        sort(arr.begin(), arr.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        // Take first k elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};