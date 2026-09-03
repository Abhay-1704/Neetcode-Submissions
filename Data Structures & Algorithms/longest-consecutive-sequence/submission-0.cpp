class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        vector<int> lengths;
        int currentLength = 1;

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] == nums[i + 1]) {
                continue;
            }

            if (nums[i] + 1 == nums[i + 1]) {
                currentLength++;
            }
            else {
                lengths.push_back(currentLength);
                currentLength = 1;
            }
        }

        lengths.push_back(currentLength);

        return *max_element(lengths.begin(), lengths.end());
    }
};