class Solution {
public:
    bool isPalindrome(string s) {
        for (int start =0, end =s.size()-1; start<end; start ++, end--)
        {
            while (!isalnum(static_cast<unsigned char>(s[start])) && start<end)
            {
                start++;
            }
            while (!isalnum(static_cast<unsigned char>(s[end])) && start<end)
            {
                end --;
            }
            if (tolower(static_cast<unsigned char>(s[start])) != tolower(static_cast<unsigned char>(s[end])))
            {
                return false;
            }
        }
        return true;
    }
};
