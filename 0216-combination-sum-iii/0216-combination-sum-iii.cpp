
class Solution {
public:

    void find(int i, int k, int n,vector<vector<int>>& ans, vector<int>& ds) {

        if (k == 0 && n == 0) {
            ans.push_back(ds);
            return;
        }
        if (k == 0 || n <= 0 || i > 9) {
            return;
        }
        ds.push_back(i);

        find(i + 1, k - 1, n - i, ans, ds);
        ds.pop_back();
        find(i + 1, k, n, ans, ds);
    }

    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;
        vector<int> ds;

        find(1, k, n, ans, ds);

        return ans;
    }
};
