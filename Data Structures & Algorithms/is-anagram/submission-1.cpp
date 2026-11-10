class Solution {
public:
    bool isAnagram(string s, string t) {
        size_t size = s.size();
        
        if (size != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) {
            return true;
        }
        return false;
    }
};
