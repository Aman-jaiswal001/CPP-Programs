class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int l = 0;
        int ans = 0;
        for(int r = 0; r<s.size(); r++){
            while(str.count(s[r])){
                str.erase(s[l]);
                l++;
            }
            str.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};