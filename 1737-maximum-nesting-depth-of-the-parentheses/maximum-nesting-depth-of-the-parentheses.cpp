class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;     // current depth
        int maxDepth = 0;  // maximum depth found

        for (char c : s) {
            if (c == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            } 
            else if (c == ')') {
                depth--;
            }
        }

        return maxDepth;
    }
};
