class Solution {
public:
    int maxArea(vector<int>& height) {
        size_t maxLeft = 0;
        size_t maxRight = height.size()-1;
        int maxVolume = (maxRight - maxLeft)*(min(height[maxLeft],height[maxRight]));
        int currLeft = 0;
        int currRight = height.size()-1;
        int currVolume = 0;
        while(currLeft < currRight)
        {
            if(height[currLeft] < height[currRight]) currLeft++;
            else currRight--;
            currVolume = (currRight - currLeft)*min(height[currLeft],height[currRight]);
            if(currVolume > maxVolume)
            {
                maxLeft = currLeft;
                maxRight = currRight;
                maxVolume = currVolume;
            }
        }
        return maxVolume;
    }
};
