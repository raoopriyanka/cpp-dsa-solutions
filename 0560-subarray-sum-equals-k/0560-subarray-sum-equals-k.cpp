class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Prefix sum 0 exists once before the array starts
        mp[0] = 1;
        
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            // Calculate current prefix sum
            sum += nums[i];
            
            // We need a previous prefix sum = sum - k
            int required = sum - k;
            
            // If it exists, those many subarrays have sum k
            if (mp.find(required) != mp.end()) {
                count += mp[required];
            }
            
            // Store/update frequency of current prefix sum
            mp[sum]++;
        }
        
        return count;
    }
};