class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans;
        map<char,int> s_m,t_m;
        if (s.size()!=t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            s_m[s[i]]++;
        }
        for(int i=0; i<s.size(); i++)
        {
             t_m[t[i]]++;
        }
        if(s_m==t_m)
        {
            ans = true;
        }
        else 
        {
            ans = false;
        }
        return ans;
    }
};
