class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hmap; // integer , next greater element
        stack<int> numstack;
        for(size_t i = 0; i<nums2.size(); i++)
        {
            while(numstack.size()!=0 && numstack.top()<nums2[i])
            {
                hmap[numstack.top()] = nums2[i];
                numstack.pop();
            }
            numstack.push(nums2[i]);
        }
        vector<int> result(nums1.size(),-1);
        for(size_t i = 0; i < nums1.size(); i++)
        {
            if(hmap.find(nums1[i]) != hmap.end())
            {
                result[i] = hmap[nums1[i]];
            }
        }
        return result;
    }
};