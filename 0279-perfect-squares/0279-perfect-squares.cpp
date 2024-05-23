class Solution {
public:
    int numSquares(int n) {
        vector<int> sqReq(n+1, INT_MAX);
        sqReq[0] = 0;
        for(int currNum = 1; currNum <= n; currNum++){
            for(int prevNum = 1; prevNum * prevNum <= currNum; prevNum++){
                int prevStateContri = sqReq[currNum - prevNum * prevNum];
                sqReq[currNum] = min(sqReq[currNum], prevStateContri + 1);
            }
        } 
        return sqReq[n];
    }
};