class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> mp;

        // Empty prefix
        mp[0] = 1;

        long long prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            // Check if there is a previous prefix sum
            // such that current - previous = k
            if (mp.find(prefixSum - k) != mp.end()) {
                count += mp[prefixSum - k];
            }

            // Store current prefix sum
            mp[prefixSum]++;
        }

        return count;
    }
};