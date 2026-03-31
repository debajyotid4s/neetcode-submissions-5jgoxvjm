class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            int rightMost = -1;
            for(int j = i + 1; j < n; j++){
                rightMost = max(rightMost, arr[j]);
            }
            ans[i] = rightMost;
        }

        return ans;
    }
};