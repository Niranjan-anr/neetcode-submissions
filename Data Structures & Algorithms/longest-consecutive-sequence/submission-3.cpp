class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if ( nums.size() == 0)
        {
            return 0;
        }
        unordered_set <int> unique;
        int ans=0;
        for (int num:nums)
        {
            unique.insert(num);
        }

        for (int num:unique )
        {
            if (!unique.count(num-1))
            {
            int count=0, temp=num;
            while ( unique.count(++temp) )
            {
                count++;
            }
            if (count > ans)
            {
                ans = count;
            }
            }
        }
        return ans+1;
    }
};
