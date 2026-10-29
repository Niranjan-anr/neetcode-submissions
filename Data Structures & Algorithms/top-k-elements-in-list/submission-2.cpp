class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> freq_cou;
        vector<int> ans;
        vector<vector<int>> freq(nums.size()+1);
        for( int i=0; i<nums.size(); i++)
        {
            freq_cou[nums[i]]++;
        }
        
        for (auto &i : freq_cou)
        {
            freq[i.second].push_back(i.first);
        }
        for (int i=nums.size(); k>0; i--)
        {
            if(freq[i].size()!=0)
            {
                for (int ele : freq[i])
                {
                    ans.push_back(ele);     
                     k--;   
                }
            }           
        }
        return ans;
    }
};
