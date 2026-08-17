class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        //prefix sum 0 occurs once;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(int num : nums){
            sum += num;
            int required = sum - goal;
            if(mp.count(required)){
                ans += mp[required];
            }
            mp[sum]++;
        }
        return ans;
    }
};