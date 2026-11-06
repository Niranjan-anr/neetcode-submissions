class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()<1)
        {
            return 0;
        }
        unordered_set <char> dup;
        int ans=0;
        for(int i=0,j=0; j<s.size(); )
        {
            if(dup.count(s[j]))
            {
                dup.erase(s[i]);
                i++;
            }
            else
            {
                dup.insert(s[j]);
                if(ans<dup.size())
                {
                    ans=dup.size();
                }
                j++;
            }
        }
        return ans;
    }
};
