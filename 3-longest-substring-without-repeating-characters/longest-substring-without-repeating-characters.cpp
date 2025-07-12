class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int r=0;
        int maxlength =0;
        int hash[256];
        fill(hash, hash + 256, -1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                    
                }
            }
            int len = r-l+1;
            maxlength=max(len,maxlength);
            hash[s[r]]=r;
            r++;
        }
        return maxlength;

        
    }
};