class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int a : nums){
            if(s.count(a) == 1){
                s.erase(a);
            }
            else{
                s.insert(a);
            }
            
            
        }
        return *s.begin();
    }
};
