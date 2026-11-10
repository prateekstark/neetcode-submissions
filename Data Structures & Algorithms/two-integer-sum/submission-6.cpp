class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> s;
        int element;
        for (int i = 0; i < nums.size(); i++) {
            element = nums[i];
            if (!s.contains(element)) {
                s[target - element] = i;
            }
            else {
                if (i < s[element]) {
                    result.push_back(i);
                    result.push_back(s[element]);
                }
                else {
                    result.push_back(s[element]);
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};