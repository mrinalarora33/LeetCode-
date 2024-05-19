class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size() - 1;

        while (n > 0 && nums[n-1] >= nums[n]){
            n--;
        }

        reverse(nums.begin() + n, nums.end());

        if (n == 0){
            return;
        }
        
        int j = n-1;
        while (1){
            if (nums[n] > nums[j]){
                swap(nums[n],nums[j]);
                break;
            }else{
                n++;
            }
        }
    }
};