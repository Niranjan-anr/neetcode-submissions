class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size())
        {
            return false;
        }
        array<int, 26> maP={0};
        array<int, 26> maP2={0};
        int start=0, end=0;
        for (char c:s1)
        {
            maP[c-'a']++;
        }
        while(end<s1.size())
        {
            maP2[s2[end++]-'a']++;
        }
        if (maP==maP2)
        {
            return true;
        }
        while(end<s2.size())
        {
            maP2[s2[start]-'a']--;
            start++;
            maP2[s2[end++]-'a']++;
            if(maP2==maP)
            {
                return true;
            }
        }
        return false;
    }
};
