class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpps, mppt;
        if (s.size() != t.size()) return false;

        for(int i=0; i<s.size(); i++) {
            mpps[s[i]]++;
            mppt[t[i]]++;
        }

        for (auto it:mpps) {
            if (mppt.find(it.first) == mppt.end() || mppt[it.first] != it.second) {
                return false;
            }
        }
        return true;
    }
};
