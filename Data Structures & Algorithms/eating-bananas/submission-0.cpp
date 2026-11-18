class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int ma_x=0;
       for (int i : piles)
       {
         ma_x=max(i,ma_x); 
       }
       int left=1, right=ma_x;
       int ans=right;
       while(left<=right)
       {
            int mid = left+((right-left)/2);
            int ho=h;
            for (int pile : piles)
            {

                ho = ho-(pile/mid);
                if ( pile%mid!=0)
                {
                    ho--;
                }
            }
            if(ho>=0)
                {
                    right=mid-1;
                    if(ans>mid)
                    {
                    ans=mid;
                    }
                }
            else
            {
                left=mid+1;
            }
       }
       return ans;
    }
};
