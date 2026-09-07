class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int d=nums.size();
        int t=d/2;
        for(auto it:mp)
        {
            if(it.second > t)
            {
                return it.first;
            }
        }
        return 0;
    }
};