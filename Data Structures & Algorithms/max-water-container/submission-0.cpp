class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        for (int st=0, end=heights.size()-1; end>st; )
        {
            if ( (min(heights[st],heights[end]))*(end-st)>ans)
            {
                ans=min(heights[st],heights[end])*(end-st);
            }
            if (heights[st]>heights[end])
            {
                end-- ;
            }
            else
            {
                st++;
            }

        }
        return ans;
    }
};
