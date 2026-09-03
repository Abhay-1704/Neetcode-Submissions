class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int length = max(s.length(),t.length());

        for (int i = 0; i < length; i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }

        return true;
    }
};
