class Solution {
public:
    int characterReplacement(string s, int k) {
        // Fast I/O lines to completely bypass standard stream overhead
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int ans = 0;
        int mat[26] = {0};
        int max_e = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            mat[s[right] - 'A']++;
            max_e = max(max_e, mat[s[right] - 'A']);
            
            // If invalid, shrink window
            if ((right - left + 1) - max_e > k) {
                mat[s[left] - 'A']--;
                left++;
            }
            
            // Flat max optimization (allows branchless compilation)
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
