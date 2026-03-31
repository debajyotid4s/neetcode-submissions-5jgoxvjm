class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1, mp2;
        for(auto c : s){
            mp1[c]++;
        }
        for(auto c : t){
            mp2[c]++;
        }

        if(mp1 == mp2){
            return true;
        }
        else return false;
    }
};
