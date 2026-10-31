class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> grid_val_hor(9);
        vector<unordered_set<int>> grid_val_ver(9);
        vector<unordered_set<int>> grid_3_3(9);
        for (int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int val = board[i][j];
                if (val!='.')
                {   
                if (grid_val_hor[i].count(val) || grid_val_ver[j].count(val) || grid_3_3[(i/3*3)+j/3].count(val) )
                {
                    return false;
                }
                grid_val_hor[i].insert(val);
                grid_val_ver[j].insert(val);
                grid_3_3[(i/3*3)+j/3].insert(val);
                }
            }
        }
        return true; 
    }
};
