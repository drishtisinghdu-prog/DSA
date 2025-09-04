class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     for(int j=0; j<n; j++) {
        for(int i=j+1; i<n; i++) {
            if(nums[j] + nums[i] == target) {
                return {i,j};
            }
        }
     }
     return {};   
    }
};