class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        int current = 0;
        int count = 0;

        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for(auto it : st) {

            if(st.find(it-1)==st.end()) {

                current = it;
                count = 1;

                while(st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};