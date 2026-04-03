class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int numberOfZero = 0, product = 1;

        for(auto i: nums){
            if(i == 0) numberOfZero++;
            else product *= i;
        }
        for(auto i: nums){
            if(numberOfZero > 1) ans.push_back(0);
            else if(numberOfZero == 1) {
                if(i == 0) ans.push_back(product);
                else ans.push_back(0);
            }
            else ans.push_back(product / i);
        }
        return ans;
    }
};
