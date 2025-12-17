// https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        if (s.length() == 0) {return -1;} // not needed?

        std::map<char, int> freq;
        // add non repeating letters from s to freq (set frequency to 0 for each)
        for (auto letter : s) {
            freq[letter] = 0;
        }

        // count frequency of every letter
        for (auto letter : s) {
            freq[letter]++;
        }

        // find first letter with frequency 0
        int i = 0;
        for (auto letter : s) {
            if (freq[letter] == 1) {return i;}
            i++;
        }

    return -1;
    }
};
