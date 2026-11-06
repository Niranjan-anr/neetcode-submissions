class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int mat[26]={0};
        int max_e=0;
        for (int left=0,right=0; right<s.size(); right++ )
        {
            mat[s[right]-'A']++;
            max_e =max(max_e, mat[s[right]-'A']);
            if ((right-left+1)-max_e<=k)
            {
                ans=right-left+1;
            }
            else
            {
                mat[s[left]-'A']--;
                left++;
            }
        }
        return ans;
    }
};
