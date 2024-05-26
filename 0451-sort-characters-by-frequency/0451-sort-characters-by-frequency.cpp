class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        vector<pair<char,int>> vmap;
        string v1;
        for(char i:s)
        {
            umap[i]++;
        }
        for(auto m:umap)
        {
            vmap.push_back(m);

        }
        sort(vmap.begin(), vmap.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });
        for(auto i:vmap)
        {
            for(int j=0;j<i.second;j++)
            {
                v1.push_back(i.first);
            }
        }
        return v1;
        
    }
};