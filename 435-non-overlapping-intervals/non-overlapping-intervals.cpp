class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         vector<pair<int,int>> v;

        // store (end, start)
        for (auto &in : intervals) {
            v.push_back({in[1], in[0]});
        }

        // default sort → by end time
        sort(v.begin(), v.end());

        int countNonOverlap = 0;
        int lastEnd = INT_MIN;

        for (auto &p : v) {
            int e = p.first;   // end
            int s = p.second;  // start

            if (s >= lastEnd) {   // non-overlapping
                countNonOverlap++;
                lastEnd = e;
            }
            // else overlapping → skip
        }

        return v.size() - countNonOverlap;
    }
};