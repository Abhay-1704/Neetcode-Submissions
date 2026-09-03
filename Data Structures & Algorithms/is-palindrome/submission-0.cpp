class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> reverse;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (isalnum(s[i])) {
                reverse.push_back(tolower(s[i]));
            }
        }

        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (tolower(s[i]) != reverse[j]) {
                    return false;
                }
                j++;
            }
        }

        return true;
    }
};
