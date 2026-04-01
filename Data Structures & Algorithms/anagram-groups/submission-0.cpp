class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>group;
        for(auto s: strs){
            string temp = s;
            sort(temp.begin(), temp.end());

            group[temp].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i: group){
            ans.push_back(i.second);
        }
        return ans;
    }
};
