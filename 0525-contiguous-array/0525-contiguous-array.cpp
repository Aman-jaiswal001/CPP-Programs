class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int , int> mp;
        //prfix sum 0 exists before array starts
        mp[0] = -1;
        int sum = 0;
        int maxLen = 0;
        for(int i = 0; i<nums.size(); i++){
            //convert 
            //0 -> -1
            //1 -> +1
            if(nums[i] == 0){
                sum += -1;
            }else{
                sum += 1;
            }
            //same prefix sum found
            if(mp.count(sum)){
                int len = i - mp[sum];
                maxLen = max(maxLen, len);
            }else{
                //store first occurence only
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};