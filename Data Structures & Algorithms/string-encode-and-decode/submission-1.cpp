class Solution {
public:
    string encode(vector<string>& strs) {

        string encodedValue = "";

        for (string str : strs) {
            encodedValue += to_string(str.size());
            encodedValue += "#";
            encodedValue += str;
        }

        return encodedValue;
    }

   vector<string> decode(string s) {

    vector<string> ans;

    int i = 0;

    while (i < s.size()) {

        // Step 1: Get length
        int len = 0;

        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        // Step 2: Skip '#'
        i++;

        // Step 3: Generate string of length len
        string word = "";

        for (int j = 0; j < len; j++) {
            word += s[i];
            i++;
        }

        ans.push_back(word);
    }

    return ans;
}
};