class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxm = INT_MIN;
        for (int i: candies) maxm = max(maxm, i);
        int find = maxm - extraCandies;
        vector<bool> vec (candies.size(), false);
        for (int i=0; i<candies.size(); i++) {
            if (candies[i] >= find) vec[i] = true;
        }
        return vec;
    }
};