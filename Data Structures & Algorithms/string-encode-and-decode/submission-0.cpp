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

        vector<string> decodedValue;

        int i = 0;

        while (i < s.size()) {

            int count = 0;

            while (s[i] != '#') {
                count = count * 10 + (s[i] - '0');
                i++;
            }

            i++; // skip '#'

            decodedValue.push_back(s.substr(i, count));

            i += count;
        }

        return decodedValue;
    }
};