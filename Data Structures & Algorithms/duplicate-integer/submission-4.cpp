class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_set <int> count;
     if(nums.size()==1)
     {
        return false;
     }
     for (int i=0; i<nums.size();i++)
     {
            if(count.count(nums[i]))
            {
                return true;
            }
            else
            {
                count.insert(nums[i]);
            }
     }   
     return false;
    }
};