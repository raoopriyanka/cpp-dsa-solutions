class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        int zeroCount = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                zeroCount++;
            }
            else
            {
                p = p * nums[i];
            }
        }

        vector<int> ans;

        if(zeroCount >= 2)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                ans.push_back(0);
            }
        }
        else if(zeroCount == 1)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == 0)
                {
                    ans.push_back(p);
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
        else
        {
            for(int i = 0; i < nums.size(); i++)
            {
                ans.push_back(p / nums[i]);
            }
        }

        return ans;
    }
};