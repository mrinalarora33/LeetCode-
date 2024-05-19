class Solution {
public:
    int singleNumber(vector< int>& nums) {
        int ans;
        unordered_map< int,int>um;
        for(int i=0;i< nums.size();i++){
            um[nums[i]]++;
        }
        for(auto x:um){
            if(x.second==1){
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};