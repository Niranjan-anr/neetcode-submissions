class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans;
        if (s.size()!=t.size())
        {
            return false;
        }
        vector<char>s_d,t_d;
        for(int i=0; i<s.size(); i++)
        {
            s_d.push_back(s[i]);
        }
        for(int i=0; i<s.size(); i++)
        {
            t_d.push_back(t[i]);
        }
        sort(s_d.begin(),s_d.end());
        sort(t_d.begin(),t_d.end());
        if(s_d==t_d)
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
