class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i=0;
        int j=0;
        // multiset<int> st;
        map<int,int>mp;
        int cnt=0;
        while(j<nums.size()){
           mp[nums[j]]++;
            j++;
            cnt++;
            if(cnt>=k){
             for (auto i = mp.rbegin(); i != mp.rend(); ++i) {
  
       ans.push_back(i->first);
       break;
    }
                
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }
            // cout<<st.size()<<endl;
            
        }
        return ans;
    }
};