class Solution {
public:
    int search(vector<int>& nums, int target) {
        size_t lo = 0;
        size_t hi = nums.size()-1;
        size_t mid;
        while(hi-lo>1)
        {
            mid = floor((hi+lo)/2);
            if(nums[mid] > target) hi = mid;
            else if(nums[mid] == target) return mid;
            else lo = mid;
        }
        if(nums[lo]==target) return lo;
        if(nums[hi]==target) return hi;
        return -1;
    }
};