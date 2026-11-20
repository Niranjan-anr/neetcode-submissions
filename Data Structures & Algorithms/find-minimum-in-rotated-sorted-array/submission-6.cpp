class Solution {
public:
    int findMin(vector<int> &nums) {
        int sizze = nums.size()-1;
        int i=sizze;
    
        if (sizze==0)
        {
            return nums[0];
        }
        while( i>0 and nums[i]>nums[i-1])
        {
            i--;
        }
        return nums[i];
    }
};
