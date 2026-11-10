class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> d;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (d.contains(s)) {
                d[s].push_back(strs[i]);
            }
            else {
                d[s] = vector<string>({strs[i]});
            }
        }

        for (auto it : d) {
            result.push_back(it.second);
        }
        return result;
    }
};
