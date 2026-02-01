class Solution {
public:
    bool rotateString(string s, string goal) {
        // Length must be equal
        if (s.length() != goal.length())
            return false;

        // Concatenate s with itself
        string doubled = s + s;

        // Check if goal is a substring
        return doubled.find(goal) != string::npos;
    }
};
