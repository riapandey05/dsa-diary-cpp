class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        int presum = 0;
        int cnt = 0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int rem = presum - k;
            if(mpp.find(rem)!=mpp.end())
              cnt += mpp[rem];
            mpp[presum]+=1;
        }
        return cnt;
    }
};