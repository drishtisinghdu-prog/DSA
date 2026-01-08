class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> hash;
        int n = nums.size();
        hash[n] = {0};
        for(int i=0; i<n; i++) {
            hash [nums[i]]++;
        }
        for(int i=0; i<n; i++) {
            if(hash[nums[i]] > n/2) {
                return nums[i];
            }
        }
        return -1;
    }
};