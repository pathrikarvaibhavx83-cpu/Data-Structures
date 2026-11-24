class Solution {
public:

    void sol(int i,
             vector<int>& candidates,
             int sum,
             int target,
             vector<int>& curr,
             vector<vector<int>>& ans) {

        if (sum == target) {
            ans.push_back(curr);
            return;
        }

        if (sum > target) {
            return;
        }

        if (i == candidates.size()) {
            return;
        }

        // PICK
        curr.push_back(candidates[i]);

        sol(i, candidates, sum + candidates[i],
            target, curr, ans);

        curr.pop_back();
        sol(i + 1, candidates, sum, target, curr, ans);
    }


    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {

        vector<vector<int>> ans;
        vector<int> curr;

        sol(0, candidates, 0, target, curr, ans);

        return ans;
    }
};