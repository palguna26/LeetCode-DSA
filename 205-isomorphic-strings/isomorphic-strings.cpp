class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            // Check s -> t mapping
            if (s_to_t.count(a) && s_to_t[a] != b)
                return false;

            // Check t -> s mapping
            if (t_to_s.count(b) && t_to_s[b] != a)
                return false;

            s_to_t[a] = b;
            t_to_s[b] = a;
        }

        return true;
    }
};
