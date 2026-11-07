class Solution {
public:
    bool isValid(string s) {
        if (s.size()<2 or s.size()%2==1)
        {
            return false;
        }
        map <char,char> maP;
        maP['(']=')';
        maP['{']='}';
        maP['[']=']';
        stack<char> che;
        for (char c:s )
        {
            if (c=='{' or c=='(' or c=='[')
            {
                che.push(c);
            }
            else
            {
                if (che.empty())
                {
                    return false;
                }
                char cht= che.top();
                che.pop();
                if (maP[cht]!=c)
                {
                    return false;
                }
            }
        }
        return che.empty();
    }
};
