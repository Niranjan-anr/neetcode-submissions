class Solution {
public:
    int findMin(vector<int> &nums) {
        int sizze = nums.size()-1;
        int mid;
        int left=0, right=sizze;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
        return nums[left];
    }
};
