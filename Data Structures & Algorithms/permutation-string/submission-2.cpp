class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if (s1.size() > s2.size()) return false;

        int maP[26] = {0};
        int maP2[26] = {0};

        for (int i = 0; i < s1.size(); i++) {
            maP[s1[i] - 'a']++;
            maP2[s2[i] - 'a']++;
        }

        // Count how many out of 26 letters currently match in frequency
        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (maP[i] == maP2[i]) matches++;
        }

        int start = 0;
        for (int end = s1.size(); end < s2.size(); end++) {
            if (matches == 26) return true;

            // 1. Add incoming right character
            int r = s2[end] - 'a';
            maP2[r]++;
            if (maP2[r] == maP[r]) matches++;
            else if (maP2[r] == maP[r] + 1) matches--; // Was matching, now off by 1

            // 2. Remove outgoing left character
            int l = s2[start++] - 'a';
            maP2[l]--;
            if (maP2[l] == maP[l]) matches++;
            else if (maP2[l] == maP[l] - 1) matches--; // Was matching, now off by 1
        }

        return matches == 26;
    }
};
