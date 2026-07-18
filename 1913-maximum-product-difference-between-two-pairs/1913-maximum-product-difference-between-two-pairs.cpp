class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int firstSmaller = INT_MAX;
        int secondSmaller = INT_MAX;
        int firstLarger = 0;
        int secondLarger = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if( nums[i] < firstSmaller ){
                secondSmaller = firstSmaller;
                firstSmaller = nums[i];
            }else if (nums[i] < secondSmaller) secondSmaller = nums[i];
            if( nums[i] > firstLarger ){
                secondLarger = firstLarger ;
                firstLarger = nums[i];
            }else if( nums[i] > secondLarger) secondLarger = nums[i];
        }return (firstLarger * secondLarger) - ( firstSmaller * secondSmaller);
    }
};