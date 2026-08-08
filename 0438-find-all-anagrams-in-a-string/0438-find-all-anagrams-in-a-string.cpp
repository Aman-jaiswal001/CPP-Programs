class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int> ans;

        int n = s.size();
        int k = p.size();

        if (k > n)
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> windowFreq(26, 0);

        // Frequency of pattern
        for (char ch : p) {
            pFreq[ch - 'a']++;
        }

        // First window
        for (int i = 0; i < k; i++) {
            windowFreq[s[i] - 'a']++;
        }

        // Check first window
        if (pFreq == windowFreq) {
            ans.push_back(0);
        }

        // Slide window
        for (int right = k; right < n; right++) {

            // Add new character
            windowFreq[s[right] - 'a']++;

            // Remove old character
            windowFreq[s[right - k] - 'a']--;

            // Check anagram
            if (pFreq == windowFreq) {
                ans.push_back(right - k + 1);
            }
        }

        return ans;
    }
};