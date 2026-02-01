class Solution {
public:
    bool isAnagram(string s, string t) {
        // Length check
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> hashmap;

        // Count characters in s
        for (char c : s) {
            hashmap[c]++;
        }

        // Decrease count using t
        for (char c : t) {
            // If character not found, not an anagram
            if (hashmap.find(c) == hashmap.end())
                return false;

            hashmap[c]--;

            // Remove key if count becomes zero
            if (hashmap[c] == 0)
                hashmap.erase(c);
        }

        // If map is empty, it's an anagram
        return hashmap.empty();
    }
};
