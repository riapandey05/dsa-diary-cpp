class Solution {
public:
    string minWindow(string s, string t) {
       int hash[256] = {0};
        for (char c : t) hash[c]++;

        int l = 0, r = 0;
        int cnt = 0;                       // how many characters matched so far
        int minLength = INT_MAX;           // length of best window
        int startIndex = -1;               // starting index of best window

        while (r < s.size()) {
            // if current char is still needed, increase count
            if (hash[s[r]] > 0) cnt++;

            // always decrement hash (we allow negatives to show “extra” chars)
            hash[s[r]]--;
            r++;

            // when we have matched all chars of t
            while (cnt == t.size()) {
                if (r - l < minLength) {
                    minLength = r - l;
                    startIndex = l;
                }

                // before moving l forward, put char back into hash
                hash[s[l]]++;
                if (hash[s[l]] > 0) {
                    // we lost a required char
                    cnt--;
                }
                l++;
            }
        }

        return (startIndex == -1) ? "" : s.substr(startIndex, minLength);
    }
};