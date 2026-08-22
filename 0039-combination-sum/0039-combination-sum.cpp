class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int> & candidates, int target, int start){
        //target achieved
        if(target == 0){
            ans.push_back(current);
            return;
        }

        //target exceeded
        if(target < 0){
            return;
        }

        for(int i = start; i< candidates.size(); i++){
            //choose
            current.push_back(candidates[i]);

            //reuse same element
            solve(candidates, target - candidates[i], i);

            //backtrack
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates , target , 0);
        return ans;
    }
};