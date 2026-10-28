class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> calibration;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            int current_value = nums[i];
            auto found_value = calibration.find(target - current_value);
            
            if (found_value != calibration.end()) {
                return {found_value->second, i};
            }
            calibration.emplace(current_value, i);
        }
        return {-1, -1};
    }
};