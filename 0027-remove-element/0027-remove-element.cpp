class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int n = nums.size();
     vector<int> tem;
     for (int i=0; i<n; i++) {
        if (nums[i] != val) {
            tem.push_back(nums[i]);
        }
     }
     nums = tem;
     int k = nums.size();  
     return k; 
    }
};