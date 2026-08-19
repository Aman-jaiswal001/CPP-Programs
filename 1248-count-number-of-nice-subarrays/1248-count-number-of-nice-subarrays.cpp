class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //similar to problem no. - 930
        unordered_map<int , int>mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(int num : nums){
            if(num % 2 == 1){
                sum++;
            }
            int required = sum - k;
            if(mp.count(required)){
                ans += mp[required];
            }
            mp[sum]++;
        }
        return ans;
    }
};