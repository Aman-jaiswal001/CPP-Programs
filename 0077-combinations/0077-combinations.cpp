class Solution {
public:
    vector<vector<int>> ans;
    vector<int>current;
    void solve(int start, int n, int k){
        //combination is complete
        if(current.size() == k){
            ans.push_back(current);
            return;
        }
        //try every possible number
        for(int i = start; i<= n; i++){
            //choose
            current.push_back(i);
            //explore
            solve(i+1, n, k);

            //backtrack
            current.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return ans;   
    }
};