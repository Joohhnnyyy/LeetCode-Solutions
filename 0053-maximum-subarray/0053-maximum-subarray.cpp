class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currAns = nums[0];
        int ans = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            currAns = max(currAns + nums[i] , nums[i]);
            ans = max(ans , currAns);
        }return ans;
    }
};