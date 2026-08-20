class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums)
        {
            st.insert(num);
        }

        int longest = 0;

        for(int num : st)
        {
            // Is this the start of a sequence?
            if(st.find(num - 1) == st.end())
            {
                int curr = num;
                int count = 1;

                while(st.find(curr + 1) != st.end())
                {
                    curr++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};