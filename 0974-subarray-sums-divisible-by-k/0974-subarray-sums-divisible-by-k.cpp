class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int Psum = 0;
        int count = 0;
        for(int num : nums){
            Psum += num;
            //normalise negative remainder
            int rem = ((Psum % k) + k) % k;
            //same remainder means divisible subarray
            if(mp.count(rem)){
                count += mp[rem];
            }
            // store remainder frequency
            mp[rem]++;
        }
        return count;
    }
};