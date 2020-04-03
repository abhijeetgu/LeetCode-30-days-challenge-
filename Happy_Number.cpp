class Solution {
    int f(int n)
    {
        int k= n;
        int sum =0;
        while(k!=0)
            {
                int rem = k%10;
                k = k/10;
                sum += (rem * rem);
            }
            return sum;
    }
public:
    bool isHappy(int n) 
    {
        unordered_set<int> visited;
        while(true)
        {
            if(n==1)
            {
                return true;
            }
            n = f(n);
            if(visited.count(n) == 1)
            {
                return false;
            }
            visited.insert(n);
        }
            
    }
};
