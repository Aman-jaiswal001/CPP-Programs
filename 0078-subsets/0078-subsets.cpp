class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    void solve(vector<int> & nums, int index){
        //Base case 
        if(index == nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[index]);
        //choice 1 - take nums[index]
        solve(nums, index+1);

        //backtrack
        current.pop_back();

        //choice 2 - don't take nums[index]
        solve(nums, index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};