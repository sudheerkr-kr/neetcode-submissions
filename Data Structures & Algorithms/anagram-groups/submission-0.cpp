class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<pair<string, string>> v;

        // Har string ka sorted version store karo
        for (int i = 0; i < strs.size(); i++) {

            string s = strs[i];
            string temp = s;

            sort(temp.begin(), temp.end());

            v.push_back({temp, s});
        }

        // Sorted string ke basis par sort
        sort(v.begin(), v.end());

        vector<vector<string>> ans;

        int i = 0;

        while (i < v.size()) {

            vector<string> curr;

            string key = v[i].first;

            while (i < v.size() && v[i].first == key) {

                curr.push_back(v[i].second);

                i++;
            }

            ans.push_back(curr);
        }

        return ans;
    }
};