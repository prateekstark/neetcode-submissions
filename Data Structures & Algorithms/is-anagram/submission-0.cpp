class Solution {
public:
    bool isAnagram(string s, string t) {
        size_t size = s.size();
        
        if (size != t.size()) {
            return false;
        }

        unordered_map<char, int> d;
        for (int i = 0; i < s.size(); i++) {
            if (d.contains(s[i])) {
                d[s[i]]++;
            }
            else {
                d[s[i]] = 1;
            }
            if (d.contains(t[i])) {
                d[t[i]]--;
            }
            else {
                d[t[i]] = -1;
            }  
        }

        for (auto it : d) {
            if (it.second != 0) {
                return false;
            }
        }
        return true;
    }
};
