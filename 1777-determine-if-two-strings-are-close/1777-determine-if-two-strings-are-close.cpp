class Solution {
public:
    bool checkIsUnique(unordered_set<char>& set1, unordered_set<char>& set2) {
        for (char c : set1) {
            if (set2.find(c) == set2.end()) return false;
        }
        return true;
    }

    bool FrequencyOfChars(unordered_map<char, int>& word1, unordered_map<char, int>& word2) {
        vector<int> one, two;

        for (auto& [key, value] : word1) {
            one.push_back(value);
        }
        for (auto& [key, value] : word2) {
            two.push_back(value);
        }

        sort(one.begin(), one.end());
        sort(two.begin(), two.end());

        if (one.size() != two.size()) return false;

        for (size_t i = 0; i < one.size(); i++) {
            if (one[i] != two[i]) return false;
        }
        return true;
    }

    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;

        unordered_map<char, int> Map1, Map2;

        for (size_t i = 0; i < word1.length(); i++) {
            Map1[word1[i]]++;
            Map2[word2[i]]++;
        }

        unordered_set<char> uniqueWord1(word1.begin(), word1.end());
        unordered_set<char> uniqueWord2(word2.begin(), word2.end());

        if (!checkIsUnique(uniqueWord1, uniqueWord2)) return false;

        return FrequencyOfChars(Map1, Map2);
    }
};