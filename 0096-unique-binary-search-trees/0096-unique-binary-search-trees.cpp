class Solution {
public:
    int numTrees(int num) 
    {
        if(num <= 1)
            return 1;

        int catelon = 0;

        for(int idx = 0; idx < num; idx++)
        {
            catelon = catelon + numTrees(num - idx - 1) * numTrees(idx);
        }

        return catelon;
        
    }
};