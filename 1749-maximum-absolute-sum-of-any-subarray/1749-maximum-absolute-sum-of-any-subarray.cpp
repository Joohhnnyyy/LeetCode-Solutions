class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int maxSum = nums[0];
        int minSum = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){
            maxEnding = max(maxEnding + nums[i] , nums[i]);
            minEnding = min(minEnding + nums[i] , nums[i]);

            maxSum = max( maxEnding , maxSum);
            minSum = min( minEnding , minSum);

        }return (max( maxSum , abs(minSum)));

    }
};