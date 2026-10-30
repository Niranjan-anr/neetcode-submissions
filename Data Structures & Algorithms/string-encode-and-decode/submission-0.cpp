class Solution {
public:

    string encode(vector<string>& strs) {
        string enc = "";
        for (int i=0; i< strs.size(); i++)
        {
            enc+=to_string(strs[i].size());
            enc+='#';
            enc+= strs[i];
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string tems;
        for ( int i=0; i<s.size();)
        {
            int j=i;
            while (s[i]!='#')
            {
                i++;
            }
            int size = stoi(s.substr(j,i-j));
            ans.push_back(s.substr(i+1,size));
            i = i+size+1;
        }
        return ans;
    }
};
