
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            if (i!=0 and nums[i]==nums[i-1])
            {
                continue;
            }
            int st=i+1, end=nums.size()-1;
            while(st<end)
            {
                if (nums[st]+nums[end]+nums[i]==0)
                {
                    ans.push_back({nums[st], nums[end], nums[i]});
                    st++;
                    end--;
                    while(end>st and nums[st]==nums[st-1])
                    {
                        st++ ;
                    }
                    while(end>st and nums[end]==nums[end+1])
                    {
                        end-- ;
                    }
                }
                else if(nums[st]+nums[end]+nums[i]>0)
                {
                    end-- ;
                }
                else
                {
                    st++ ;
                }
            }
            }
        return ans;
        }
    };
