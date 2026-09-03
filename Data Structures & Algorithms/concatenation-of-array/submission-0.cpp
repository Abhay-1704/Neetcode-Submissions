class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> unums;

        for (int i = 0; i < nums.size(); i++) {
            unums.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            unums.push_back(nums[i]);
        }

        return unums;
    }
};