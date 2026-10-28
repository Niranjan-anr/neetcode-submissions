class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     map <int,int> count;
     for (int i=0; i<nums.size();i++)
     {
            auto f_value=count.find(nums[i]);
            if(f_value!=count.end())
            {
                return true;
            }
            else
            {
                count[nums[i]]=1;
            }
     }   
     return false;
    }
};