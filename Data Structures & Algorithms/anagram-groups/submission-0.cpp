class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        array <int,26> arr={0};
        vector<vector<string>> ans;
        map <array<int,26>,vector<string>> A_map;
        for(int i=0;i<strs.size();i++)
        {
            arr={0};
            for( int j=0; j<strs[i].size();j++)
            {
                arr[strs[i][j]-'a']++;
            }
            A_map[arr].push_back(strs[i]);
        }
        for(auto &k : A_map )
        {
            ans.push_back(k.second);
        }
        return ans;
    }
};
