class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int st=0, end= numbers.size()-1; st<end; )
        {
            if(numbers[st]+numbers[end]==target)
            {
               return {st+1, end+1};
            }
           if ( numbers[st]+numbers[end]>target )
            {
                end--;
            }
            else
            {
                st++;
            }
        }
    }
};
