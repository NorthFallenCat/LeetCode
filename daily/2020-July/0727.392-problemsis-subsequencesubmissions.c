class Solution {
        public:
        bool isSubsequence(string s, string t) {
            int i = 0;
            for (int j = 0; i < s.size() && j < t.size(); ++j) {
                if (s[i] == t[j]) {
                    ++i;
                }
            }
            if (i == s.size()) return true;
            return false;
        }
};