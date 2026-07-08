class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos = 0;

        for (char ch : s) {
            pos = t.find(ch, pos);

            if (pos == string::npos)
                return false;

            pos++;
        }

        return true;
    }
};