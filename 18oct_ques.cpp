class Solution {
public:
    bool backspaceCompare(string s, string t) {
      string newS, newT;

        for (char c : s) {
            if (c == '#') {
                if (!newS.empty()) {
                    newS.pop_back();
                }
            } else {
                newS.push_back(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!newT.empty()) {
                    newT.pop_back();
                }
            } else {
                newT.push_back(c);
            }
        }

        return newS == newT;
    }
};
