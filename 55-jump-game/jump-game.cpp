class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex=0;
        for(int i=0;i<nums.size();i++){
            int jump = nums[i];
            if(maxindex<i){
                return false;
            }
            maxindex = max(maxindex,i+nums[i]);

    }
    return true;}
    
};