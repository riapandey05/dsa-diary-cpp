class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int n = strs[0].size();
        int m = strs.size();
        for(int i=0;i<n;i++){
            if(strs[0][i]==strs[m-1][i]){
                ans = ans + strs[0][i];
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};