class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size() - 1;
        int currArea = 0;
        int area = 0;
        while(left < right){
            int width = right - left ;
            currArea = min(height[left], height[right]) * width;
            area = max(area , currArea);
            if( height[left] < height[right])left++;
            else right--;
        }return area;
    }
};