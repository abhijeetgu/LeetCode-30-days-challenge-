//kadane algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int a=0,m=INT_MIN;
        for(int x : nums)
        {
            a += x;
            m = max(a,m);
            a = max(a,0);
        }
        return m;
    }
};
