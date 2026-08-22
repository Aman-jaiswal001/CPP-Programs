class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> used;
    
    void solve(vector<int> & nums){
        //all elements are selected
        if(current.size() == nums.size()){
            ans.push_back(current);
            return;
        }

        //try every element
        for(int i = 0; i<nums.size(); i++){
            //already used
            if(used[i])
                continue;

            //choose
            current.push_back(nums[i]);
            used[i] = true;

            //explore
            solve(nums);

            //Backtrack
            current.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(), false);
        solve(nums);
        return ans;
    }
};