class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0; // Handle the case of an empty or single-element array.
        }

        sort(nums.begin(), nums.end());

        int maxGap = 0;

        for (int i = 1; i < nums.size(); i++) {
            int gap = nums[i] - nums[i - 1];
            maxGap = max(maxGap, gap);
        }

        return maxGap;
    }
};