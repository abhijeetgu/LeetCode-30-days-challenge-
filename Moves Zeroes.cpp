//---O(n^2) solution---

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        for(int i = 0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==0)
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
    
    }
};

// ---O(n) solution---

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nxt=0;
        for(int a : nums)
        {
            if(a != 0)
            {
                nums[nxt] = a;
                nxt++;
            }
        }
        
        for(int i=nxt;i<n;i++)
        {
            nums[i] = 0;
        }
    }
};
