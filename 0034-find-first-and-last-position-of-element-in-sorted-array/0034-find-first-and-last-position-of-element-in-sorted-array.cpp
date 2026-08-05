class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        auto low = lower_bound(nums.begin() , nums.end() , target);
        auto high = upper_bound(nums.begin() , nums.end() , target);
        if(low - nums.begin() < nums.size()  && nums[low - nums.begin()] == target){
            ans.push_back(low - nums.begin());
            ans.push_back(high - nums.begin() -1 );
        }else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};