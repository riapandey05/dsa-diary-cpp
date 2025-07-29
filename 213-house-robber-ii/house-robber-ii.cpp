class Solution {
public:
    long long int f(vector<int>&temp){
        int prev = temp[0];
        int prev2 = 0;
        for(int i=1;i<temp.size();i++){
            int take = temp[i];
            if(i>1) take+=prev2;
            int nottake = 0+prev;
            int curi = max(take,nottake);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        int n = nums.size();
        if(nums.empty()) return 0;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
          if(i!=0) temp1.push_back(nums[i]);
          if(i!=n-1) temp2.push_back(nums[i]);
          
        }
        return max(f(temp1),f(temp2));
    }
};