class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // 1️⃣ Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // 2️⃣ Move hashmap to vector for sorting
        vector<pair<char, int>> vec(freq.begin(), freq.end());

        // 3️⃣ Sort by frequency (descending)
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // 4️⃣ Build result string
        string result;
        for (auto &p : vec) {
            result.append(p.second, p.first);
        }

        return result;
    }
};
