class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int n = nums.size();
      for(int i=0; i<n; i++) {
        if (nums[i] == target) {
            return i;
        }
      }
      nums.push_back(target);
      sort(nums.begin() , nums.end());
      for (int i = 0; i < nums.size() ; i++) {
        if (nums[i] == target) {
            return i;
        }
      }  
      return 0;
    }
};